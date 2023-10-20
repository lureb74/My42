/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:26:14 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/09 11:26:31 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	const char	str[] = "Questa stringa e' moooooooooooooolto lunga";
	size_t		rft;
	size_t		ror;

	rft = ft_strlen(str);
	printf("FT:\n%ld\n", rft);
	ror = strlen(str);
	printf("ORIGINAL:\n%ld\n", ror);
	return (0);
}*/
