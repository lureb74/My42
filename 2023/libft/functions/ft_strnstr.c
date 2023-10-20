/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:42:50 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/09 12:43:06 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/string.h>
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		n = 0;
		while (big[i + n] && little[n] &&
				i + n < len && big[i + n] == little[n])
			n++;
		if (!little[n])
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	big[] = "quando quel quadro quota qui quagliamo quacquaracqua'";
	const char	little[] = "o qua";
	char		*ft;
	char		*or;
	size_t		len = 42;

	ft = ft_strnstr(big, little, len);
	printf ("Substring located (FT):\n%s\n", ft);
	or = strnstr(big, little, len);
	printf ("Substring located (ORIGINAL):\n%s\n", or);
	return (0);
}*/
