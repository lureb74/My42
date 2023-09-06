/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:50:40 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/30 21:51:27 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 32 || str[a] > 126)
			return (0);
		a++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("uyskfgyig^@(#lI G073rui0sdl"));
	printf("%d\n", ft_str_is_printable("uy\nfgyig^@(#lI G073rui0sdl"));
}
*/
