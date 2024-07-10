/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamotoyayoi <okamotoyayoi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:40:34 by oyayoi            #+#    #+#             */
/*   Updated: 2024/07/10 13:16:50 by okamotoyayo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *str, va_list args)
{
	int	count;

	count = 0;
	while (*str)
	{
		if(*str == '%')
		{
			str++;
			count++;

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

int ft_divide(const char *str, va_list args)
{
	
}