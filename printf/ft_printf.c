/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyayoi <oyayoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:22:39 by oyayoi            #+#    #+#             */
/*   Updated: 2024/07/12 13:01:17 by oyayoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			i;

	i = 0;
	if (!str)
		return (-1);
	va_start(args, str);
	i = ft_check(str, args);
	va_end(args);
	return (i);
}

int	main(void)
{
	ft_printf("Hello, World!\n");
	return (0);
}
