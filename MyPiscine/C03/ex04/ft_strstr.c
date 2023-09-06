/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 00:24:51 by lobartol          #+#    #+#             */
/*   Updated: 2023/08/02 00:24:54 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *to_f)
{
	int	n;

	n = 0;
	while (to_f[n])
		n++;
	return (n);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int	l;

	a = 0;
	l = ft_strlen(to_find);
	if (l == 0)
		return (str);
	while (str[a])
	{
		b = 0;
		if (str[a] == to_find[b])
		{
			while (str[a + b] == to_find[b] && str[a + b])
				b++;
			if (b == l)
				return (str + a);
		}
		a++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	st[50] = "Dicono che la gatta frettolosa...";
	char	find[30] = "la g";
	char	*t;

	t = ft_strstr(st, find);
	printf ("Substring located:\n%s\n", t);
}
*/
