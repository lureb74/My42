/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:42:00 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/09 12:42:15 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Ciao!";
	char	s2[] = "Ciaz!";
	size_t	n = 6;
	int		ft;
	int		or;

	ft = ft_strncmp(s1, s2, n);
	or = strncmp(s1, s2, n);
	printf("FT:\n");
	printf("%d\n", ft);
	printf("ORIGINAL:\n");
	printf("%d\n", or);
}*/
