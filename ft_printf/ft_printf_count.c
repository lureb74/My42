/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:19:39 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/29 00:21:16 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_id_cnt(int n)
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

int	ft_ux_cnt(unsigned int n, int base)
{
	int	c;

	c = 0;
	if (n == 0)
		c = 1;
	while (n)
	{
		n /= base;
		c++;
	}
	return (c);
}

int	ft_p_cnt(unsigned long n)
{
	int	c;

	c = 2;
	while (n)
	{
		n /= 16;
		c++;
	}
	return (c);
}
