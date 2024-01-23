/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lobartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 22:58:15 by lobartol          #+#    #+#             */
/*   Updated: 2023/11/28 22:58:37 by lobartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar_cnt(char s, int *count);
void	ft_putstr_cnt(char *s, int *count);
void	conv_args(va_list arg, const char c, int *count);
int		ft_printf(const char *s, ...);
int		ft_id_cnt(int n);
int		ft_ux_cnt(unsigned int n, int base);
int		ft_p_cnt(unsigned long n);
void	ft_id_toa(int n, int *count);
void	ft_ux_toa(unsigned int n, int base, char *figures, int *count);
void	ft_p_toa(unsigned long n, char *figures, int *count);

#endif
