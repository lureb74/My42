/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:11:04 by lobartol          #+#    #+#             */
/*   Updated: 2023/07/27 13:57:03 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		n;
	char	c;

	n = 0;
	while (str[n] != '\0')
	{
		c = str[n];
		write(1, &c, 1);
		n++;
	}
}
/*
// NB da parte di Ludovico!!!!
void    ft_putstr(char *str)
{
        while (*str != '\0')
        {
                write(1, &*str, 1);
                str++;
        }
}


int	main(void)
{
	ft_putstr("\"Ehila' bellissimo!!\"\n");
	return (0);
}*/
