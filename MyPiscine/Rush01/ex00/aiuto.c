/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aiuto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiorgi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:53:40 by pgiorgi           #+#    #+#             */
/*   Updated: 2023/07/29 15:58:51 by pgiorgi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

int	errors(char argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "1\n", 2);
	}
	if (strlen(argv[1]) != 31)
	{
		write (1, "1\n", 2);
	}
}

int main(int argc, char **argv)
{
	errors(argc, argv);
	printf("%s", argv[1]);
}

