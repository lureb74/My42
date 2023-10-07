/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:24:08 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/07 18:24:13 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
//#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i] != c)
	{
		if (s[i] == 0)
		{
			return (NULL);
		}
		i--;
	}
	return ((char*)s + i);
}
/*
int	main(void)
{
	const char	s[] = "qwertyuiopqwertyuiop";
	int			c;
	char		*r;

	c = 'y';
	r = ft_strrchr(s, c);
	printf("%s\n", r);
	return (0);
}*/
