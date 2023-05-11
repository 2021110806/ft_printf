/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeon2 <minjeon2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:20:27 by minjeon2          #+#    #+#             */
/*   Updated: 2023/05/08 17:16:14 by minjeon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *args, ...)
{
	va_list				ap;
	int					is_percent;
	int					return_value;

	va_start(ap, args);
	is_percent = 0;
	return_value = 0;
	while (*args)
	{
		if (*args == '%' && is_percent == 0)
			is_percent = 1;
		else if (is_percent == 1 && (*args == 'c' || *args == 'd'
				|| *args == 'i' || *args == 's' || *args == 'u' || *args == 'x'
				|| *args == 'X' || *args == 'p' || *args == '%'))
		{
			return_value += print_va(*args, ap);
			is_percent = 0;
		}
		else
			return_value += print_char(*args);
		args++;
	}
	va_end(ap);
	return (return_value);
}
