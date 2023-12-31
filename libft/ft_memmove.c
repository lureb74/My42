/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:43:27 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 19:05:17 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	if (s < d)
		while (++i <= n)
			d[n - i] = s[n - i];
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}
/*
int	main(void)
{
	char		dest[15] = "dindondan";
	const char	src[15] = "qwertyuiop";
	char		dst[15] = "dindondan";
	const char	sr[15] = "qwertyuiop";
	size_t		n = 20;

	ft_memmove(dest, src, n);
	printf("FT:\n%s\n", dest);
	memmove(dst, sr, n);
	printf("ORIGINAL:\n%s\n", dst);
	return (0);
}*/
