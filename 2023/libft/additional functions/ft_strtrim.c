/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:00:11 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/21 11:00:13 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

static int	setcheck(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		stop;
	char	*r;
	int		i;

	start = 0;
	stop = ft_strlen(s1) - 1;
	while (s1[start] && setcheck(s1[start], set) == 1)
		start++;
	while (s1[stop] && setcheck(s1[stop], set) == 1)
		stop--;
	r = (char *)malloc(((stop - start) + 2) * sizeof(char));
	if (!r)
		return (NULL);
	i = 0;
	while (start <= stop)
		r[i++] = s1[start++];
	r[i] = '\0';
	return (r);
}
/*
int	main(void)
{
	const char	s1[] = "x zcbuimxc vzmz xxz";
	const char	set[] = "zx ";
	char		*r;

	printf("Original string:\n%s\n", s1);
	r = ft_strtrim(s1, set);
	printf("Trimmed string:\n%s\n", r);
	free(r);
	return (0);
}*/
