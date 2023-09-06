/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:27:37 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/30 21:27:49 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 65 || str[a] > 90)
			return (0);
		a++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("OIDBVKSL"));
	printf("%d\n", ft_str_is_uppercase("OidBVKsL"));
	printf("%d\n", ft_str_is_uppercase("*!(#0s1d"));
	printf("%d\n", ft_str_is_uppercase(""));
}
*/
