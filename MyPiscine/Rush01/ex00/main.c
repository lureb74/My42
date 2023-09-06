/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 09:37:32 by dwilun            #+#    #+#             */
/*   Updated: 2023/07/29 10:18:46 by dwilun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_print.c"
#include "ft_control.c"
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
	}
	else
	{
		ft_control_input(argv[1]);
	}


}
