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

//#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	start -= 1;
	while (s && len--)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
/*
int	main()
{
	const char		s[] = "bimbominchia!";
	unsigned int	start = 6;
	size_t			len = 7;
	char			*r;

	r = ft_substr(s, start, len);
	printf("Substring:\n%s\n", r);
	free(r);
	return (0);
}*/
