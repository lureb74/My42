/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:41:58 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 18:31:38 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = '\0';
}
/*
int	main(void)
{
	char	sft[] = "qwertyuiop";
	char	sor[] = "qwertyuiop";
	size_t	n = 5;

	printf("Stringa di partenza:\n%s\n", sft);
	ft_bzero(sft, n);
	printf("FT:\n%s\n", sft);
	bzero(sor, n);
	printf("ORIGINAL:\n%s\n", sor);
	return (0);
}*/
