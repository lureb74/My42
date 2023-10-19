/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 19:47:59 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/11 19:48:02 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char *sdup;

	if (!(sdup = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	ft_memcpy(sdup, s, ft_strlen(s) + 1);
	return (sdup);
}
/*
int	main(void)
{
	char		*ordup;
	char		*ftdup;
	const char	s[] = "qwertyuiop";

	ordup = strdup(s);
	printf("ORIGINAL:\n%s\n", ordup);
	ftdup = ft_strdup(s);
	printf("FT:\n%s\n", ftdup);
	return (0);
}*/
