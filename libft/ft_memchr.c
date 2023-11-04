vim/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:45:08 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 00:31:53 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*scopy;
	size_t			i;

	scopy = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (scopy[i] == (unsigned char)c)
			return (&scopy[i]);
	return (0);
}
/*
int	main(void)
{
	const char	s[25] = "qwertyuiopqwertyuiop";
	const char	c = 'i';
	size_t		n = 25;
	char		*rft;
	char		*ror;

	rft = ft_memchr(s, c, n);
	printf("FT:\nLa stringa dopo '%c' è: %s\n", c, rft);
	ror = memchr(s, c, n);
	printf("ORIGINAL:\nLa stringa dopo '%c' è: %s\n", c, ror);
	return (0);
}*/
