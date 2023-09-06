/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:45:47 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/30 20:45:53 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 97 || str[a] > 122)
			return (0);
		a++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("iulafpizudvbzjkdbhajef"));
	printf("%d\n", ft_str_is_lowercase("i@#FfpiHz35vRbzNjkdEe&f"));
	printf("%d\n", ft_str_is_lowercase(""));
}
*/
