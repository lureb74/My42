/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:58:02 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 18:56:58 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

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
			while (s[i] && s[i] != c)
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
			while (s[i] && s[i] != c)
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
	cc = (char *)ft_calloc((cl + 1), sizeof(char));
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
	char	**r;
	int		line;
	int		cl;
	int		ln;

	ln = -1;
	line = lines(s, c);
	r = (char **)ft_calloc((line + 1), sizeof(char *));
	if (!r)
		return (NULL);
	while (++ln < line)
	{
		cl = columns(s, c, ln);
		r[ln] = charcopy(s, c, ln, cl);
		if (!r[ln])
		{
			while (r[--ln] && ln >= 0)
				free(r[ln]);
			free(r);
			return (NULL);
		}
	}
	return (r);
}
/*
int	main(void)
{
	char **r;
	const char	s[] = " all we need is love ";
	char		c = ' ';
	int	i = 0;

	r = ft_split(s, c);
	while (r[i])
	{
		printf("%s\n", r[i]);
		free(r[i]);
		i++;
	}
	free(r);
	return (0);
}*/
