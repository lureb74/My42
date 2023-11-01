/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:07:19 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/23 18:07:24 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

static int	count(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
		c = 1;
	while (n)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long	ncopy;
	int		len;
	char	*r;

	ncopy = n;
	len = count(n);
	r = (char *)malloc((len + 1) * sizeof(char));
	if (!r)
		return (NULL);
	if (ncopy < 0)
	{
		r[0] = '-';
		ncopy *= -1;
	}
	if (ncopy == 0)
		r[0] = '0';
	while (ncopy != 0)
	{
		r[--len] = ncopy % 10 + 48;
		ncopy /= 10;
	}
	r[count(n)] = '\0';
	return (r);
}
/*
int	main(void)
{
	int		i = -2147483648;
	char    *r;

	r = ft_itoa(i);
	printf("%s\n", r);
	free(r);
	return (0);
}*/
