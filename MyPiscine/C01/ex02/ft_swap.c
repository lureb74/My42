/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:49:38 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/26 22:07:04 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 1764;
	printf("Before :\n%d - %d\n", a, b);
	ft_swap(&a, &b);
	printf("After :\n%d - %d\n", a, b);
	return (0);
}*/
