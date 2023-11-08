/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:44:56 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 18:28:59 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	c;
	size_t	s;

	i = 0;
	c = 0;
	s = 1;
	if (*str == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
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
//ASCII values "syntax in strings" and names for ISSPACE:
//9	"\t" horizontal tab
//10	"\n" line feed (new line)
//11	"\v" vertical tab
//12	"\f" form feed
//13	"\r" carriage return
//32	" "  space

int	main(void)
{
	const char	str[] = "	\v\n\f\t\r -00021x4362";
	int			ift;
	int			ior;

	ift = ft_atoi(str);
	printf("FT:\n%d\n", ift);
	ior = atoi(str);
	printf("ORIGINAL:\n%d\n", ior);
}*/
