/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:57:27 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/27 01:17:08 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	printf("Insert dividend: ");
	scanf("%d", &a);
	printf("Insert divider: ");
	scanf("%d", &b);
	while (b == 0)
	{
		printf("\nDIVIDER_MUST_BE != 0\n please try again...\n");
		printf("\nInsert divider:\n");
		scanf("%d", &b);
	}
	ft_ultimate_div_mod(&a, &b);
	printf("\nResult = %d\n", a);
	printf("Remainder = %d\n", b);
	return (0);
}*/
