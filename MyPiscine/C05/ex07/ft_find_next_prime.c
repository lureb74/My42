/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:16:02 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/09 21:16:05 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int pr)
{
	int	i;

	if (pr <= 1)
		return (0);
	i = 2;
	while (i <= pr / 2)
	{
		if (pr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = ft_is_prime(nb);
	if (i == 1)
		return (nb);
	while (i != 1)
		i = ft_is_prime(++nb);
	return (nb);
}
/*
int	main(void)
{
	int	i;
	i = ft_find_next_prime(-5);
	printf("%d\n", i);
	i = ft_find_next_prime(0);
	printf("%d\n", i);
	i = ft_find_next_prime(1);
	printf("%d\n", i);
	i = ft_find_next_prime(2);
	printf("%d\n", i);
	i = ft_find_next_prime(43);
	printf("%d\n", i);
	i = ft_find_next_prime(33354);
	printf("%d\n", i);
	i = ft_find_next_prime(2147483630);
	printf("%d\n", i);
	return (0);
}*/
