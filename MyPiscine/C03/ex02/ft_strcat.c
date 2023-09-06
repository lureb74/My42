/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:32:30 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/01 21:32:34 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;

	a = 0;
	while (dest[a])
		a++;
	while (*src)
		dest[a++] = *src++;
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	d[20] = "Que viva ";
	char	s[20] = "Mexico!";
	char	*t;

	t = ft_strcat(d, s);
	printf("%s\n", t);
}
*/
