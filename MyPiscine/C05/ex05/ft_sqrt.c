/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 00:23:48 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/09 00:23:50 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (r * r <= nb && r <= 46340)
	{
		if (nb == r * r)
			return (r);
		else
			r++;
	}
	return (0);
}
/*
int	main(void)
{
	int	i;
	
	i = ft_sqrt(2147395600);
	printf("%d\n", i);
	return (0);
}*/
