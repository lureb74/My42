/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 22:09:27 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/26 23:48:15 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 75894;
	y = 43;
	if (y != 0)
	{
		ft_div_mod(x, y, &x, &y);
		printf("Result = %d\n", x);
		printf("Remainder = %d\n", y);
	}
	else
		printf("DIVIDER_MUST_BE != 0\n");
	return (0);
}*/
