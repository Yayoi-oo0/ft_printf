/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyayoi <oyayoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:56:31 by oyayoi            #+#    #+#             */
/*   Updated: 2024/08/13 17:56:32 by oyayoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	i = printf("aaaaaaaa%saaaaaa\n", NULL);
	printf("i = %d\n", i);
	return (0);
}
