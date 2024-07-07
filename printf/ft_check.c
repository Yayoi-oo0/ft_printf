/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyayoi <oyayoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:40:34 by oyayoi            #+#    #+#             */
/*   Updated: 2024/06/30 17:58:24 by oyayoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *str, va_list args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*str)
	{
		if(str[i] == '%')
		{
			i++;
			count
		}
			
	}
}

int ft_divide(const char *str, va_list args)
{
	
}