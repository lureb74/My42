/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:56:33 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/09 17:56:36 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	i;
	
	i = ft_is_prime(-5);
	printf("%d\n", i);
	i = ft_is_prime(0);
	printf("%d\n", i);
	i = ft_is_prime(1);
	printf("%d\n", i);
	i = ft_is_prime(2);
	printf("%d\n", i);
	i = ft_is_prime(43);
	printf("%d\n", i);
	i = ft_is_prime(33353);
	printf("%d\n", i);
	i = ft_is_prime(2147483647);
	printf("%d\n", i);
	i = ft_is_prime(2000000000);
	printf("%d\n", i);
	return (0);
}*/
