/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:58:02 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/21 15:58:05 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

static int	lines(char const *s, char c)
{
	int	line;
	int	i;

	line = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			line++;
			i++;
			while (s[i] != c)
				i++;
		}
	}
	return (line);
}

static int	columns(char const *s, char c, int ln)
{
	int	i;
	int	cc;

	i = 0;
	while (s[i] && ln >= 0)
	{
		cc = 0;
		if (s[i] == c)
			i++;
		else
		{
			cc++;
			i++;
			while (s[i] != c)
			{
				cc++;
				i++;
			}
			ln--;
		}
	}
	return (cc);
}

static char	*charcopy(char const *s, char c, int ln, int cl)
{
	int		i;
	int		ic;
	char	*cc;

	i = 0;
	cc = (char *)malloc((cl + 1) * sizeof(char));
	if (!cc)
		return (NULL);
	while (s[i] && ln >= 0)
	{
		ic = 0;
		while (s[i] && s[i] == c)
			i++;
		if (ln == 0)
			while (s[i] && s[i] != c)
				cc[ic++] = s[i++];
		while (s[i] && s[i] != c)
			i++;
		ln--;
	}
	cc[ic] = '\0';
	return (cc);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		line;
	int		cl;
	int		ln;

	ln = -1;
	line = lines(s, c);
	mat = (char **)malloc((line + 1) * sizeof(char *));
	if (!mat)
		return (NULL);
	while (++ln < line)
	{
		cl = columns(s, c, ln);
		mat[ln] = charcopy(s, c, ln, cl);
		if (!mat[ln])
		{
			while (mat[--ln])
				free(mat[ln]);
			free(mat);
			return (NULL);
		}
	}
	return (mat);
}
/*
int	main(void)
{
	char **what;
	const char	s[] = "      all we need is love    ";
	char		c = ' ';
	int	i = 0;

	what = ft_split(s, c);
	while (what[i])
	{
		printf("%s\n", what[i]);
		free(what[i]);
		i++;
	}
	free(what);
	return (0);
}*/
