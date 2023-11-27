/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:35:40 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/17 15:36:37 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc((nmemb * size) * sizeof(void));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

static char	*cat_strcat(char *dst, char *src)
{
	char    *r;
	int		i;
	int		j;

	i = -1;
	j = 0;
	r = ft_calloc(1, (ft_strlen(dst) + ft_strlen(src) + 1));
	if (!r)
		return (NULL);
	while (dst[++i])
		r[i] = dst[i];
	while (src[j])
		r[i++] = src[j++];
	free(dst);
	free(src);
	return (r);
}

static int	count(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
		c = 1;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static char	*cat_di_toa(char *s, int n)
{
	long	ncopy;
	size_t	len;
	char	*r;

	ncopy = n;
	len = count(n);
	r = ft_calloc(1, (len + 1));
	if (!r)
		return (NULL);
	if (ncopy < 0)
	{
		r[0] = '-';
		ncopy *= -1;
	}
	if (ncopy == 0)
		r[0] = '0';
	while (ncopy != 0)
	{
		r[--len] = ncopy % 10 + 48;
		ncopy /= 10;
	}
	r = cat_strcat(s, r);
	return (r);
}

static char *cat_char_percent(char *s, va_list arg, const char c)
{
	char 	*r;
	int		i;

	i = -1;
	r = ft_calloc(1, ft_strlen(s) + 2);
	if (!r)
		return (NULL);
	while (s[++i])
		r[i] = s[i];
	if (c == 'c')
		r[i] = va_arg(arg, int);
	else if (c == '%')
		r[i] = '%';
	free(s);
	return (r);
}

char    *ralloc(char *s, size_t count)
{
	char    *r;
	int		i;

	i = -1;
	if (count == 0)
	{
		s = ft_calloc(1, 2);
		if (!s)
			return (NULL);
		return (s);
	}
	r = ft_calloc(1, count + 2);
	if (!r)
		return (NULL);
	while (s[++i])
		r[i] = s[i];
	free(s);
	return (r);
}

char    *salloc(char *s)
{
	char    *r;
	int		i;

	i = -1;
	r = ft_calloc(1, ft_strlen(s) + 1);
	if (!r)
		return (NULL);
	while (s[++i])
		r[i] = s[i];
	return (r);
}

static char	*cat_args(char *s, va_list arg, const char c)
{
	char	*r;

	if (c == 'd' || c == 'i')
		r = cat_di_toa(s, va_arg(arg, int));
	else if (c == 's')
		r = cat_strcat(s, salloc(va_arg(arg, char *)));
	else if (c == 'c' || c == '%')
		r = cat_char_percent(s, arg, c);
	return (r);
}

int	ft_printf(const char *s, ...)
{
	size_t	count;
	size_t  i;
	char	*r;
	va_list	arg;

	i = -1;
	count = 0;
	va_start(arg, s);
	while (s[++i])
	{
		r = ralloc(r, count);
		if (s[i] == '%')
			r = cat_args(r, arg, s[i++ + 1]);
		else
			r[count] = s[i];
		count = ft_strlen(r);
	}
	va_end(arg);
	ft_putstr_fd(r, 1);
	free(r);
	return (count);
}

int	main(void)
{
	int		i = 1234567890;
	char	s[] = "ciao!";
	char    c = 'c';
/*	int		ror;*/
	int		rft;

	rft = ft_printf("Integer %d, character %c, string %s\nand %%%%%%%m", i, c, s);
	printf("\nTotal lenght: %d\n", rft);
/*	printf("String lenght: %lu\n", f = strlen(s));
	ror = printf("Print this: %d\n...and this: \n", i);
	printf("Total lenght: %d\n", ror);*/
	return (0);
}
