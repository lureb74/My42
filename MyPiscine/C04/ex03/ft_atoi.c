/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 01:36:40 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/07 01:36:43 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	m;
	int	n;

	i = 0;
	m = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			m++;
		i++;
	}
	if (str[i] > 47 && str[i] < 58)
		n = str[i] - 48;
	i++;
	while (str[i] > 47 && str[i] < 58)
	{
		n = n * 10 + (str[i++] - 48);
	}
	if (m % 2 != 0)
		n = -n;
	return (n);
}

int	main(void)
{
	int		a;

	a = ft_atoi("0");
	printf("%d\n", a);
}
