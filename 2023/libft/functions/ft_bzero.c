/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:41:58 by lobartol          #+#    #+#             */
/*   Updated: 2023/10/11 18:42:03 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*us;
	size_t			i;

	us = (unsigned char *)s;
	i = 0;
	while (i < n)
		us[i++] = '\0';
}
/*
int	main(void)
{
	char	s[] = "qwertyuiop";
	size_t	n = 1;

	ft_bzero(s, n);
	printf("%s\n", s);
	return (0);
}*/
/*
int	main(void)
{
	char	s[] = "qwertyuiop";
	size_t	n = 1;

	bzero(s, n);
	printf("%s\n", s);
	return (0);
}*/
