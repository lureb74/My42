/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:31:47 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/30 12:52:51 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 48 || str[a] > 57)
			return (0);
		a++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_numeric("0123456789876543210"));
	printf("%d\n", ft_str_is_numeric("fkjKJFiykjkjyfgkjV"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("$*&$&$@$!"));
}
*/
