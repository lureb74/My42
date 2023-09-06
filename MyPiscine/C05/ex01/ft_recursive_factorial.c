/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:01:01 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/08 19:01:07 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		x *= nb * ft_recursive_factorial(nb - 1);
	return (x);
}
/*
int	main(void)
{
	int	x;

	x = ft_recursive_factorial(10);
	printf("%d\n", x);
	return (0);
}*/
