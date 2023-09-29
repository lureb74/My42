/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:17:34 by lobartol          #+#    #+#             */
/*   Updated: 2023/09/25 19:17:36 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char *ft_strcat(char *dest, const char *src)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while(dest[d])
		d++;
	while(src[s])
		dest[d++] = src[s++];
	dest[d] = 0;
	return (dest);
}
/*
int	main(void)
{
	char dest[15] = "qwerty";

	ft_strcat(dest, " uiop");
	printf("%s\n", dest);
	return (0);
}*/
