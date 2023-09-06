/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 23:21:57 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/05 23:22:01 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ds;

	ds = 0;
	while (dest[ds])
		ds++;
	while (*src && ds < size - 1)
		dest[ds++] = *src++;
	dest[ds] = '\0';
	return (ds);
}
/*
int				main(void)
{
	char			dest[30] = "una rondine ";
	char			src[20] = "non fa primavera";
	unsigned int	size;

	size = 30;
	printf("Before:\n     dest: %s\n      src: %s\nAfter:\n", dest, src);
	printf("dest size: %d\n", ft_strlcat(dest, src, size));
	printf("     dest: %s\n", dest);
}*/
