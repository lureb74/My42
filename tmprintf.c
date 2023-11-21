#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

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

char	*ft_itoa(int n)
{
	long	ncopy;
	int		len;
	char	*r;

	ncopy = n;
	len = count(n);
	r = (char *)malloc((len + 1) * sizeof(char));
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
	r[count(n)] = '\0';
	return (r);
}

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

char	*ft_strcat(char *dest, char *src)
{
	int	    a;
	char    *tmp;

	a = -1;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(dest) + ft_strlen(src) + 1));
	if (!tmp)
		return (NULL);
	while (dest[++a])
		tmp[a] = dest[a];
	while (*src)
		tmp[a++] = *src++;
	tmp[a] = '\0';
	free(dest);
	return (tmp);
}

static char	*formats(va_list arg, const char c)
{
	char	*r;

	if (c == 'd' || c == 'i')
		r = ft_itoa(va_arg(arg, int));
	else if (c == 's')
		r = va_arg(arg, char *);
	else if (c == 'c')
	{
		r = (char *)malloc(sizeof(char) + 1);
		r[0] = va_arg(arg, int);
		r[1] = '\0';
	}
	else if (c == '%')
	{
		r = (char *)malloc(sizeof(char) + 1);
		r[0] = '%';
		r[1] = '\0';
	}
	return (r);
}

char    *ralloc(char *s, size_t i)
{
	int     j;
	char    *r;

	j = -1;
	if (i == 0)
	{
		s = (char *)malloc(sizeof(char) + 1);
		if (!s)
			return (NULL);
		return (s);
	}
	r = (char *)malloc(sizeof(char) + i + 1);
	if (!r)
		return (NULL);
	while (s[++j])
		r[j] = s[j];
	r[j] = '\0';
	free(s);
	return (r);
}

int	ft_printf(const char *s, ...)
{
	size_t	i;
	size_t  si;
	char	*r;
	va_list	arg;

	si = -1;
	i = 0;
	va_start(arg, s);
	while (s[++si])
	{
		r = ralloc(r, i);
		if (s[si] == '%')
			r = ft_strcat(r, formats(arg, s[si++ + 1]));
		else
		{
			r[i++] = s[si];
			r[i] = '\0';
		}
		i = ft_strlen(r);
	}
	va_end(arg);
	ft_putstr_fd(r, 1);
	return (i);
}

int	main(void)
{
	int		i = 42;
	char	s[] = "ciao!";
	char    c = 'c';
	int		rft;
//	int		ror;

	rft = ft_printf("Integer %d, character %c, string %s and %%", i, c, s);
	printf("\nTotal lenght: %d\n", rft);
/*	printf("String lenght: %lu\n", f = strlen(s));
	ror = printf("Print this: %d\n...and this: \n", i);
	printf("Total lenght: %d\n", ror);*/
	return (0);
}
