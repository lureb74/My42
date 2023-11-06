/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:16:37 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 19:48:02 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	size_t	i;

	if (!s || !f)
		return (NULL);
	r = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!r)
		return (NULL);
	i = -1;
	while (s[++i])
		r[i] = f(i, s[i]);
	r[i] = '\0';
	return (r);
}
/*
char my_toupper(unsigned int i, char c)
{
	printf("My inner function: index = %d and %c\n", i, c);
 	if (c > 96 && c < 123)
 		return (c - 32);
 	return (c);
}

int	main(void)
{
 	char	str[13] = "maiuscolami!";
 	char	*r;
 
 	printf("Stringa di partenza: %s\n", str);
 	r = ft_strmapi(str, my_toupper);
 	printf("Risultato: %s\n", r);
 	free (r);
 	return (0);
}*/
