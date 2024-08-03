/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyayoi <oyayoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 19:13:40 by oyayoi            #+#    #+#             */
/*   Updated: 2024/08/03 21:03:26 by oyayoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	countdigit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count += 1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa_base(unsigned int n, int upper)
{
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (countdigit(n) + 1));
	if (!str)
		return (NULL);
	str[countdigit(n)] = '\0';
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n != 0)
	{
		str[countdigit(n) - 1] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
