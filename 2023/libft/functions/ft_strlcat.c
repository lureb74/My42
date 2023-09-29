/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:48:41 by lobartol          #+#    #+#             */
/*   Updated: 2023/09/28 09:48:44 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char *ft_strlcat(char *dst, const char *src, size_t size)
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

	ft_strlcat(dest, " uiop");
	printf("%s\n", dest);
	return (0);
}*/
