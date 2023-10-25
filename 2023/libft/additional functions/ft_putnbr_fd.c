/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:20:03 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/25 18:20:22 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

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

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || !fd)
		return ;
	write(fd, s, ft_strlen(s));
}

void	ft_putnbr_fd(int n, int fd)
{
	long	ncopy;
	int		len;
	char	*r;

	ncopy = n;
	len = count(n);
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
	r[ncount(n)] = '\0';
	ft_putstr_fd(r, fd);
}
