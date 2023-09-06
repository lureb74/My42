/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:48:00 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/30 02:14:32 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 65 || (str[a] > 90 && str[a] < 97) || str[a] > 122)
			return (0);
		a++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("AbCdEfGhIjKlMnOpQrStUvWxYz"));
	printf("%d\n", ft_str_is_alpha("*!&^$#"));
	printf("%d\n", ft_str_is_alpha(""));
}
*/
