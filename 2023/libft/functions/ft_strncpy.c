/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:09:20 by lobartol          #+#    #+#             */
/*   Updated: 2023/09/25 18:09:22 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	while (*src && 0 < n--)
		*dest++ = *src++;
	*dest = 0;
	return (dest);
}
/*
int	main(void)
{
	char dest[15];

	ft_strncpy(dest, "qwertyuiop", 6);
	printf("%s\n", dest);
	return (0);
}*/
