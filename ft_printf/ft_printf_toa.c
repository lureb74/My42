/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_toa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:31:34 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/29 00:32:23 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_id_toa(int n, int *count)
{
	long	ncopy;
	int		len;
	char	r[12];

	ncopy = n;
	len = ft_id_cnt(n);
	if (ncopy < 0)
	{
		r[0] = '-';
		ncopy *= -1;
	}
	if (ncopy == 0)
		r[0] = '0';
	r[len] = '\0';
	while (ncopy != 0)
	{
		r[--len] = ncopy % 10 + 48;
		ncopy /= 10;
	}
	ft_putstr_cnt(r, count);
}

void	ft_ux_toa(unsigned int n, int base, char *figures, int *count)
{
	int				len;
	char			r[12];

	len = ft_ux_cnt(n, base);
	if (n == 0)
		r[0] = '0';
	r[len] = '\0';
	while (n != 0)
	{
		r[--len] = figures[n % base];
		n /= base;
	}
	ft_putstr_cnt(r, count);
}

void	ft_p_toa(unsigned long n, char *figures, int *count)
{
	int					len;
	char				r[21];

	if (n == 0)
	{
		(*count) += write(1, "(nil)", 5);
		return ;
	}
	len = ft_p_cnt(n);
	r[0] = '0';
	r[1] = 'x';
	r[len] = '\0';
	while (n != 0)
	{
		r[--len] = figures[n % 16];
		n /= 16;
	}
	ft_putstr_cnt(r, count);
}
