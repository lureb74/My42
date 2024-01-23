/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:35:40 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/30 17:57:12 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "ft_printf.h"

void	ft_putchar_cnt(char s, int *count)
{
	write(1, &s, 1);
	(*count)++;
}

void	ft_putstr_cnt(char *s, int *count)
{
	if (!s)
	{
		(*count) += write(1, "(null)", 6);
		return ;
	}
	while (*s)
	{
		write(1, s++, 1);
		(*count)++;
	}
}

void	conv_args(va_list arg, const char c, int *count)
{
	if (c == 'i' || c == 'd')
		ft_id_toa(va_arg(arg, int), count);
	else if (c == 'u')
		ft_ux_toa(va_arg(arg, unsigned int), 10, "0123456789", count);
	else if (c == 'x')
		ft_ux_toa(va_arg(arg, unsigned int), 16, "0123456789abcdef", count);
	else if (c == 'X')
		ft_ux_toa(va_arg(arg, unsigned int), 16, "0123456789ABCDEF", count);
	else if (c == 'p')
		ft_p_toa(va_arg(arg, unsigned long), "0123456789abcdef", count);
	else if (c == 's')
		ft_putstr_cnt(va_arg(arg, char *), count);
	else if (c == 'c')
		ft_putchar_cnt(va_arg(arg, int), count);
	else if (c == '%')
		ft_putchar_cnt('%', count);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	int		i;
	va_list	arg;

	i = -1;
	count = 0;
	va_start(arg, s);
	while (s[++i])
	{
		if (s[i] == '%')
			conv_args(arg, s[i++ + 1], &count);
		else
			ft_putchar_cnt(s[i], &count);
	}
	va_end(arg);
	return (count);
}
/*
int	main(void)
{
	int		i = -65781;
	char	s[] = "ciao!";
	char    c = 'c';
	unsigned int	u = 4294967295;
	unsigned long	p = 4294967295;
	int		rft;
	int		ror;

	rft = ft_printf("%%\n%i\n%s\n%c\n%u\n%p\n%x\n%X\n", i, s, c, u, &p, u, u);
	ft_printf("\nTotal lenght: %d\n", rft);
	ror = printf("%%\n%i\n%s\n%c\n%u\n%p\n%x\n%X\n", i, s, c, u, &p, u, u);
	printf("\nTotal lenght: %d\n", ror);
	return (0);
}*/
