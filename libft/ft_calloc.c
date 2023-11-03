/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:47:23 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/11 18:47:25 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc((nmemb * size) * sizeof(void));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int	main(void)
{
	void		*ptr;
	size_t		nmemb = 3;
	size_t		size = 2;
	char		*p;

	ptr = ft_calloc(nmemb, size);
	p = ptr;
	printf("%s\n", p);
	free(ptr);
	return (0);
}*/
