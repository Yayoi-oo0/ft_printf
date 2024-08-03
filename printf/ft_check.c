/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyayoi <oyayoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:40:34 by oyayoi            #+#    #+#             */
/*   Updated: 2024/08/03 21:01:25 by oyayoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *str, va_list args)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_divide(*str, args);
		}
		else
		{
			ft_putchar(*str);
			count++;
		}
		str++;
	}
	return (count);
}

int	ft_divide(int str, va_list args)
{
	int	count;

	count = 0;
	if (str == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (str == 's')
		count += ft_putstr(va_arg(args, char *));
	// else if (str == 'p')
	// 	count += ft_putptr(va_arg(args, unsigned long long));
	else if (str == 'd' || str == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (str == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	// else if (str == 'x')
	// 	count += ft_puthex(va_arg(args, unsigned int), 0);
	// else if (str == 'X')
	// 	count += ft_puthex(va_arg(args, unsigned int), 1);
	else if (str == '%')
		count += ft_putchar('%');
	return (count);
}
