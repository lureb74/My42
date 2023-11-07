/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:15:13 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 19:46:38 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = -1;
	if (s && f)
		while (s[++i])
			f(i, &s[i]);
}
/*
void my_tolower(unsigned int i, char *s)
{
	int	j = -1;

	while (s[++j])
		if (s[j] > 64 && s[j] < 91)
			s[j] += 32;
	printf("Funzione interna: index %d - %s\n", i, s);
}

int	main(void)
{
 	char str[13] = "MINUSCOLAMI!";
 
 	printf("Stringa di partenza: %s\n", str);
 	ft_striteri(str, my_tolower);
 	printf("Risultato: %s\n", str);
 	return (0);
}*/
