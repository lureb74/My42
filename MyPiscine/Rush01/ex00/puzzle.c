/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiorgi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:34:57 by pgiorgi           #+#    #+#             */
/*   Updated: 2023/07/29 18:42:31 by pgiorgi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_create_matrix( char *input, int combs[4][4])
{
	int x;
	int y;
	int count;
	//int combs[4][4];
	x = 0;
	y = 0;
	count = 0;
	while (x < 4 && input[count] != '\0')
	{
		while (y < 4)
		{
			if (input[count] >= '1' && input[count] <= '4')
			{
				combs[x][y] = input[count] - 48;				
			//	printf("%i ", combs[x][y]);
				y++;
			}
			count++;
		}
		x++;
		y = 0;
	//	printf("\n");
	}
}

int	fratm_cumpa(int combs[4][4], int i)
{

	return(combs[i][0] + combs[i][1] + combs[i][2] + combs[i][3]);
}
int main(int argc, char **argv)
{
	int combs[4][4];
	//printf("%s", argv[1]);
	ft_create_matrix(argv[1], combs);
	return(0);
}



