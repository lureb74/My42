/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:48:47 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/09 11:49:06 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
	char		dst[43] = "Questa stringa ";
	const char	src[] = "e' stata copiata per intero";
	size_t		r;
	size_t		size = 43;

	r = ft_strlcat(dst, src, size);
	printf("FT:\nValue: %ld\n", r);
	puts(dst);
	if(r >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	return (0);
}*/
/*
int	main(void)
{
	char		dst[43] = "Questa stringa ";
	const char	src[] = "e' stata copiata per intero";
	size_t		r;
	size_t		size = 43;

	r = strlcat(dst, src, size);
	printf("ORIGINAL:\nValue: %ld\n", r);
	puts(dst);
	if(r >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	return (0);
}*/
