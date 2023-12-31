/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:27:43 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 19:47:24 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char		dstft[43];
	char		dstor[43];
	const char	src[] = "Questa stringa e' stata copiata per intero";
	size_t		size = 31;
	size_t		rft;
	size_t		ror;

	rft = ft_strlcpy(dstft, src, size);
	printf("FT:\nValue: %ld\n", rft);
	puts(dstft);
	if(rft >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	ror = strlcpy(dstor, src, size);
	printf("FT:\nValue: %ld\n", ror);
	puts(dstor);
	if(ror >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	return (0);
}*/
