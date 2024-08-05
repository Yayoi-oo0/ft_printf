/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamotoyayoi <okamotoyayoi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 13:25:37 by oyayoi            #+#    #+#             */
/*   Updated: 2024/08/05 10:53:11 by okamotoyayo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	char	*str;
	int		count;

	str = ft_itoa_base(n, 0);
	if (!str)
		return (0);
	count = ft_putstr("0x");
	count += ft_putstr(str);
	free(str);
	return (count);
}
