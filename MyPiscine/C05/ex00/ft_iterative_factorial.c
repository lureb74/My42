/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:08:15 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/08 17:08:19 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
		x = x * (nb-- - 1);
	return (x);
}
/*
int	main(void)
{
	int	x;

	x = ft_iterative_factorial(10);
	printf("%d\n", x);
	return (0);
}*/
