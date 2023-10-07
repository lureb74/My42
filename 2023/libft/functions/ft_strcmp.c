/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:16:07 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/07 22:16:10 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("Ciao!", "Ciao!"));
	printf("%d\n", ft_strcmp("Ciao!", "Ciao*"));
	printf("%d\n", ft_strcmp("miao!", "Ciao"));
}*/
