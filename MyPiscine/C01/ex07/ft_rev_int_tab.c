/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 14:44:32 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/27 20:16:22 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	sw;

	i = 0;
	while (i < (size / 2))
	{
		sw = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = sw;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {144, 89, 55, 42, 21, 13, 8, 5, 3, 2, 1, 1, 0};
	int	i;
	int	s;

	i = 0;
	s = sizeof(tab) / sizeof(tab[0]);
	while (i < s)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_rev_int_tab(tab, s);
	while (i < s)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
*/
