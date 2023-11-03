/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:40:17 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/09 12:40:42 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[l]);
	while (--l >= 0)
		if (s[l] == (unsigned char)c)
			return ((char *)s + l);
	return (0);
}
/*
int	main(void)
{
	const char	s[] = "qwertyuiopq";
	int			c = '\0';

	printf("%p\n", strrchr(s, c));
	printf("%p\n", ft_strrchr(s, c));
	return (0);
}*/
/*
char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (l > 0)
	{
		if (s[l] == (unsigned char)c)
			return ((char *)s + l);
		l--;
	}
	return (0);
}*/
