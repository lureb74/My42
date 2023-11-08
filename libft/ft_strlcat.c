/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:48:47 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 19:47:11 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_c;
	size_t		i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_c = i;
	while (src[i - dst_c] && i < size - 1)
	{
		dst[i] = src[i - dst_c];
		i++;
	}
	if (dst_c < size)
		dst[i] = '\0';
	return (dst_c + ft_strlen(src));
}
/*
int	main(void)
{
	char		dstft[43] = "Questa stringa ";
	char		dstor[43] = "Questa stringa ";
	const char	src[] = "e' stata copiata per intero";
	size_t		size = 43;
	size_t		rft;
	size_t		ror;

	rft = ft_strlcat(dstft, src, size);
	printf("FT:\nValue: %ld\n", rft);
	puts(dstft);
	if(rft >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	ror = strlcat(dstor, src, size);
	printf("FT:\nValue: %ld\n", ror);
	puts(dstor);
	if(ror >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	return (0);
}*/
