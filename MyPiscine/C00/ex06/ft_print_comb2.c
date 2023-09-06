/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 23:13:53 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/20 23:15:23 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	numbers(int a, int b)
{
	char	n1;
	char	n2;
	char	n3;
	char	n4;

	n1 = a / 10 + '0';
	n2 = a % 10 + '0';
	n3 = b / 10 + '0';
	n4 = b % 10 + '0';
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, " ", 1);
	write(1, &n3, 1);
	write(1, &n4, 1);
	if (! (a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			numbers(a, b++);
		}
		a++;
	}
}
