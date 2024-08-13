/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okamotoyayoi <okamotoyayoi@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:57:52 by oyayoi            #+#    #+#             */
/*   Updated: 2024/08/13 19:25:35 by okamotoyayo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	i = ft_printf("ft     = %s%s%s\n", "abc", "def", "ghi");
	j = printf("printf = %s%s%s\n", "abc", "def", "ghi");
	printf("ft_count = %d\n", i);
	printf("pr_count = %d\n", j);
	system("leaks a.out");
	return (0);
}

// #include "ft_printf.h"
// #include <stdio.h>

// int main(void)
// {
//     int num1 = ft_printf("m_c char > %c            %c  <   ", 'a', 'b');
//     printf("%d \n", num1);
//     int num2 = printf("o_c char > %c            %c  <   ", 'a', 'b');
//     printf("%d \n", num2);

//     printf("\n");
//     static char str = '\0';
//     num1 = ft_printf("m_c char > %c            %c  <   ", str, 'b');
//     printf("%d \n", num1);
//     num2 = printf("o_c char > %c            %c  <   ", str, 'b');
//     printf("%d \n", num2);

//     printf("\n");
//     num1 = ft_printf("m_s string   > %s            %s  <   ", "hey", "siri");
//     printf("%d \n", num1);
//     num2 = printf("o_s string   > %s            %s  <   ", "hey", "siri");
//     printf("%d \n", num2);

//     printf("\n");
//     num1 = ft_printf("m_s string   > %s            %s  <   ", "", "\0");
//     printf("%d \n", num1);
//     num2 = printf("o_s string   > %s            %s  <   ", "", "\0");
//     printf("%d \n", num2);

//     printf("\n");
//     int num = 1;
//     int *p_num1 = &num;
//     num1 = ft_printf("m_p poiner   > %p %p <   ", "hey", p_num1);
//     printf("%d \n", num1);
//     num2 = printf("o_p poiner   > %p %p <   ", "hey", p_num1);
//     printf("%d \n", num2);

//     printf("\n");
//     num1 = ft_printf("m_d digit > %d            %d  <   ", -123, 0);
//     printf("%d \n", num1);
//     num2 = printf("o_d digit > %d            %d  <   ", -123, 0);
//     printf("%d \n", num2);

//     printf("\n");
//     num1 = ft_printf("m_i int  > %i            %i  <   ", -123, 42);
//     printf("%d \n", num1);
//     num2 = printf("o_i int  > %i            %i  <   ", -123, 42);
//     printf("%d \n", num2);

//     printf("\n");
//     num1 = ft_printf("m_u uint > %u            %u  <   ", 1, 4321);
//     printf("%d \n", num1);
//     num2 = printf("o_u uint > %u            %u  <   ", 1, 4321);
//     printf("%d \n", num2);

//     printf("\n");
//     num1 = ft_printf("m_x hex  > %x        %x  <   ", -1, 4321);
//     printf("%d \n", num1);
//     num2 = printf("o_x hex  > %x        %x  <   ", -1, 4321);
//     printf("%d \n", num2);

//     printf("\n");
//     num1 = ft_printf("m_x hex  > %X        %X  <   ", -1, 42);
//     printf("%d \n", num1);
//     num2 = printf("o_x hex  > %X        %X  <   ", -1, 42);
//     printf("%d \n", num2);

//     printf("\n");
//     num1 = ft_printf("m_%% %%      > %c            %s  <   ", 'a', "abc");
//     printf("%d \n", num1);
//     num2 = printf("o_%% %%      > %c            %s  <   ", 'a', "abc");
//     printf("%d \n", num2);

//     return (0);
// }
