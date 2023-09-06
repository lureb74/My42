/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 23:08:58 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/28 00:20:20 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	ch;
	int	sw;

	i = 0;
	ch = 1;
	while (i < size - 1)
	{
		if (tab[i] > tab[ch])
		{
			sw = tab[i];
			tab[i] = tab[ch];
			tab[ch] = sw;
		}
		if (ch == size -1)
		{
			ch = i + 1;
			i++;
		}
		ch++;
	}
}
/*
int	main(void)
{
	int	tab[] = {144, 1, 8, 42, 21, 55, 89, 13, 1, 0, 5, 3, 2};
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
	ft_sort_int_tab(tab, s);
	while (i < s)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
*/
