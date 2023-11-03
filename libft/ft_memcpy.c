/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:42:41 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/11 18:42:47 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int	main(void)
{
	char		dest[11];
	const char	src[] = "qwertyuiop";
	char		dst[11];
	const char	sr[] = "qwertyuiop";
	size_t		n = 20;

	ft_memcpy(dest, src, n);
	printf("FT:\n%s\n", dest);
	memcpy(dst, sr, n);
	printf("ORIGINAL:\n%s\n", dst);
	return (0);
}*/
/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	*(unsigned char *)dest = '\0';
	return (dest);
}*/
