/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:35:27 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/18 20:35:36 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!c && n)
	{
		*(unsigned char *)s = '\0';
		return ((unsigned char *)s);
	}
	while (*(unsigned char *)s && n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		(unsigned char *)s++;
		n--;
	}
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
