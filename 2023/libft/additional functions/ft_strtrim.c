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

//#include <stdio.h>
//#include <stdlib.h>

static int	setcheck(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
	r = (char *)malloc((stop - start) + 2);
	if (r == NULL)
		return (NULL);
	i = 0;
	while (start <= stop)
		r[i++] = s1[start++];
	return (r);
}
/*
int	main()
{
	const char	s1[] = "x zcbuimxc vzmz xxz";
	const char	set[] = "zx ";
	char		*r;

	printf("Original string:\n%s\n", s1);
	r = ft_strtrim(s1, set);
	printf("Trimmed string:\n%s\n", r);
	return (0);
}*/
