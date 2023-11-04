/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:37:57 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/09 12:39:44 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((unsigned char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s[] = "qwertyuiopqwertyuiop";
	int			c = 'p';

	printf("%s\n", strchr(s, c));
	printf("%s\n", ft_strchr(s, c));
	return (0);
}*/
/*
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}*/
