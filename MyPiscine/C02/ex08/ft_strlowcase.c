/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:11:01 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/31 11:11:05 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
			str[a] += ' ';
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s[] = "QWERTY123UIOP$%^";

	printf("Before: \n%s\n", s);
	printf("After: \n%s\n", ft_strlowcase(s));
}
*/
