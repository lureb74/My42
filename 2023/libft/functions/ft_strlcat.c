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

#include<stdio.h>
#include<string.h>

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
	size_t		s_len;
	size_t		i;

	if (size == 0) // si può scrivere anche if(!size)
		return (ft_strlen(dst));
	s_len = ft_strlen(src);
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
	return (dst_c + s_len);
}

int	main(void)
{
	char		dst[] = "questa stringa ";
	const char	src[] = "e' stata copiata per intero";
	size_t		r;
	size_t		size = 43;

	r = ft_strlcat(dst, src, size);
	printf("Value: %ld\n", r);
	puts(dst);
	if(r >= size)
		puts("Stringa interrotta");
	else
		puts("Stringa completa");
	return (0);
}
