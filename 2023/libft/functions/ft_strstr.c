/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <lobartol@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:52:44 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/07 18:52:53 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	n;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		n = 0;
		while (haystack[i + n] == needle[n])
		{
			if (!needle[n + 1])
			{
				return ((char *)haystack + i);
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
	char	haystack[60] = "quando quel quadro quotera' qui quaglieremo quacquaracqua'";
	char	needle[60] = "w";
	char	*t;

	t = ft_strstr(st, find);
	printf ("Substring located:\n%s\n", t);
}*/
