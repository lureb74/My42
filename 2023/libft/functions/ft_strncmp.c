/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:29:15 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/07 22:29:18 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && *s1 && i < n - 1)
		i++;
	return (*s1 - *s2);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("Ciao!", "Ciao!", 5));
	printf("%d\n", ft_strncmp("Ciao!", "Ciao!*", 7));
	printf("%d\n", ft_strncmp("miao!", "Ciao", 0));
}*/
