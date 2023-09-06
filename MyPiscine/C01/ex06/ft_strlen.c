/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:58:18 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/27 14:42:36 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
/*
int	main(void)
{
	int	x;

	printf("La risposta alla domanda fondamentale e'..\n");
	x = ft_strlen ("La risposta alla domanda fondamentale e'..");
	printf("%d", x);
	return (0);
}*/
