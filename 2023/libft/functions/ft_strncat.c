/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:08:12 by lobartol          #+#    #+#             */
/*   Updated: 2023/09/25 23:08:22 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while(dest[d])
		d++;
	while(src[s] && s < n)
		dest[d++] = src[s++];
	dest[d] = 0;
	return (dest);
}
/*
int	main(void)
{
	char dest[15] = "qwerty";

	ft_strncat(dest, " uiopasdfghjkl", 5);
	printf("%s\n", dest);
	return (0);
}*/
