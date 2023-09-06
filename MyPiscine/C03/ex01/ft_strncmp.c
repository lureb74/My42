/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:54:32 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/01 20:54:36 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 == *s2 && (*s1 < n - 1) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("Ciao!", "Ciao!", 5));
	printf("%d\n", ft_strncmp("Ciao!", "Bello!", 0));
	printf("%d\n", ft_strncmp("miao!", "Ciao!", -1));
}
*/
