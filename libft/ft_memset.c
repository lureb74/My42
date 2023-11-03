/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:25:03 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/09 18:25:07 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*us;
	size_t			i;

	us = (unsigned char *)s;
	i = 0;
	while (i < n)
		us[i++] = (unsigned char)c;
	return (s);
}
/*
int	main(void)
{
	char	sft[] = "qwertyuiop";
	char	sor[] = "qwertyuiop";
	int		c = 120;
	size_t	n = 6;

	ft_memset(sft, c, n);
	printf("FT:\n%s\n", sft);
	memset(sor, c, n);
	printf("ORIGINAL:\n%s\n", sor);
	return (0);
}*/
/*
void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = (unsigned char)c;
	return (s);
}*/
