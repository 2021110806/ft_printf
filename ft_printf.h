/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeon2 <minjeon2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:54:55 by minjeon2          #+#    #+#             */
/*   Updated: 2023/05/07 04:14:20 by minjeon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		print_hex(unsigned long long inp, int is_uppercase);
int		print_addr(unsigned long long inp);
int		print_demical(int inp);
int		print_unsigned(int inp);
int		print_char(char inp);
int		print_va(char identifier, va_list ap);
int		ft_printf(const char *args, ...);
int		deal_zero_exception(int is_addr);
int		calc_hex(unsigned long long remained, int is_uppercase);

#endif
