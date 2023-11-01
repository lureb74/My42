/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:49:43 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/21 15:49:53 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		l1;
	int		l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	r = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (!r)
		return (NULL);
	l1 = -1;
	while (s1[++l1])
		r[l1] = s1[l1];
	while (*s2)
		r[l1++] = *s2++;
	r[l1] = '\0';
	return (r);
}
/*
int	main(void)
{
	const char	s1[] = "bimbo";
	const char	s2[] = "minchia!";
	char		*r;

	r = ft_strjoin(s1, s2);
	printf("New string:\n%s\n", r);
	free(r);
	return (0);
}*/
