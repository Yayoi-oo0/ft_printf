/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyayoi <oyayoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:22:39 by oyayoi            #+#    #+#             */
/*   Updated: 2024/05/28 14:22:40 by oyayoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	const char	*ptr;
	int			i;
	char		*str;

	i = 0;
	ptr = ft_strdup(str);
	va_start(args, str);
}

int	main(void)
{
	ft_printf("Hello, World!\n");
	return (0);
}
