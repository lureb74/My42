/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 23:44:45 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/02 23:44:48 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	count(int cntnb)
{
	int	c;

	c = 0;
	if (cntnb == 0)
		return (1);
	while (cntnb)
	{
		cntnb /= 10;
		c++;
	}
	return (c);
}

void	ft_putnbr(int nb)
{
	int		c;
	long	n;
	char	s[10];

	c = count(nb);
	n = nb;
	if (n < 0)
	{
		ft_putstr("-");
		n = -n;
	}
	while (c > 0)
	{
		s[--c] = n % 10 + 48;
		n /= 10;
	}
	s[count(nb)] = '\0';
	ft_putstr(s);
}
/*
int	main(void)
{
	ft_putnbr(0);
	ft_putstr("\n");
}*/
