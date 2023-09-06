/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:16:13 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/01 11:17:42 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
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
}
*/
