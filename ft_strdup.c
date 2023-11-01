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

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;

	sdup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sdup)
		return (NULL);
	ft_memcpy(sdup, s, ft_strlen(s));
	sdup[ft_strlen(s)] = '\0';
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
/*
char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, s, size);
	dest[size] = '\0';
	return (dest);
}*/
