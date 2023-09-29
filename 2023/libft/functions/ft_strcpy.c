/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:33:20 by lobartol          #+#    #+#             */
/*   Updated: 2023/09/25 17:33:27 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, const char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (dest);	
}
/*
int	main(void)
{
	char dest[15];

	ft_strcpy(dest, "qwertyuiop");
	printf("%s\n", dest);
	return (0);
}*/
