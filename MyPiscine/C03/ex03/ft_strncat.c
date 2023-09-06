/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:01:30 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/01 23:01:38 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a])
		a++;
	while (b < nb && src[b])
		dest[a++] = src[b++];
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char			d[25] = "Que viva ";
	char			s[25] = "Mexico... e nuvole!";
	char			*t;
	unsigned int	n = 9;

	t = ft_strncat(d, s, n);
	printf("%s\n", t);
}
*/
