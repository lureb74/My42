/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:07:51 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/30 22:07:56 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
			str[a] -= ' ';
		a++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s[] = "qwerty123uiop$%^";

	printf("Before: \n%s\n", s);
	printf("After: \n%s\n", ft_strupcase(s));
}
*/
