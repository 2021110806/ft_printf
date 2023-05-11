/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjeon2 <minjeon2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:11:31 by minjeon2          #+#    #+#             */
/*   Updated: 2023/05/07 04:14:49 by minjeon2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int		return_value;

	return_value = 0;
	if (s == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*s)
	{
		write(fd, s, 1);
		s++;
		return_value++;
	}
	return (return_value);
}
