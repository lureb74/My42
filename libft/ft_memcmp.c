/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:46:11 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/05 19:08:31 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Ciao!";
	char	s2[] = "Ziao!";
	size_t	n = 5;
	int		ft;
	int		or;

	ft = ft_memcmp(s1, s2, n);
	or = memcmp(s1, s2, n);
	printf("FT:\n");
	printf("%d\n", ft);
	printf("ORIGINAL:\n");
	printf("%d\n", or);
}*/
