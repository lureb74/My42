/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:42:41 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 01:20:30 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return ((void *)d);
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
