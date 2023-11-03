/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:50:11 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/21 15:50:22 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	long	i;

	if (start > ft_strlen(s))
	{
		sub = (char *)malloc(sizeof(char) * 1);
		if (!sub)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	if ((ft_strlen(s) - start) <= len)
		sub = (char *)malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	else
		sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = -1;
	while (s[++i] && (size_t)i < len)
		sub[i] = s[i + start];
	sub[i] = '\0';
	return (sub);
}
/*
int	main()
{
	const char		s[] = "hola";
	unsigned int	start = 0;
	size_t			len = 18446;
	char			*r;

	r = ft_substr(s, start, len);
	printf("Substring:\n%s\n", r);
	free(r);
	return (0);
}*/
