/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:15:08 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/31 11:15:11 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		a;
	int		b;
	char	c;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if (b == 0 && c >= 97 && c <= 122)
			str[a] -= 32;
		else if (b == 1 && c >= 65 && c <= 90)
			str[a] += 32;
		if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
			b = 0;
		else
			b = 1;
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s[] = "salUt, CoMMent tu vAs ? 42mots quaRAnte-deuX; cinquante+et+un";

	printf("Before: \n%s\n", s);
	printf("After: \n%s\n", ft_strcapitalize(s));
}
*/
