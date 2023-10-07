/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:27:44 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/07 21:27:47 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i])
	{
		n = 0;
		while (big[i + n] == little[n])
		{
			if (!little[n + 1] || n == len)
			{
				return ((char *)big + i);
			}
			n++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	big[] = "quando quel quadro quotera' qui quaglieremo quacquaracqua'";
	char	little[] = "o quot";
	char	*t;
	size_t	len;

	len = 3;
	t = ft_strnstr(big, little, len);
	printf ("Substring located:\n%s\n", t);
}*/
