/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 08:23:30 by lobartol          #+#    #+#             */
/*   Updated: 2023/09/25 08:23:42 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include<string.h>
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	c;
	size_t	s;

	i = 0;
	c = 0;
	s = 1;
//	ASCII values "syntax in strings" and names for ISSPACE:
//	9	"\t" horizontal tab
//	10	"\n" line feed (new line)
//	11	"\v" vertical tab
//	12	"\f" form feed
//	13	"\r" carriage return
//	32	" "  space
	if (*str == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
//		s = (str[c] == '-' ? -1 : 1);
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		c = c * 10 + str[i] - '0';
		i++;
	}
	return (c * s);
}
/*
int	main(void)
{
	int		a;

	a = ft_atoi(" \t\v\n\f\r \t\r 		-00021x4362");
	printf("%d\n", a);
}*/
