/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:38:04 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/08/08 19:47:52 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	// TEST 1: Printing of str without any format specifier
	// printf("Hello world\n");
	// ft_printf("Hello world\n");

	//TEST 2:
	// printf("Hello world. %c\n", 'a');
	// ft_printf("Hello world. %c\n", 'a');

	
	// int a = 1;
	// int *a_ptr = &a;
	// printf("abc\n");
	// ft_printf("abc\n\n");

	// printf("%c\n", 'a');
	// ft_printf("%c\n\n", 'a');

	// printf("%s\n", "abc");
	// ft_printf("%s\n\n", "abc");

	// printf("%p\n", a_ptr);
	//cast to unsigned and convert to base16

	// printf("%d\n", 12345);
	// ft_printf("%d\n\n", 12345);

	// printf("%i\n", 12345);
	// ft_printf("%i\n\n", 12345);

	// printf("100%%\n");
	// ft_printf("100%%\n\n");

	//test %c
	//ft_printf("%c\n", 'a');
	//printf("%c\n", 'a');

	// printf("hello world %rcs \n", a);
	// ft_printf("hello world %rcs \n", a);

//TODO: Handle this case
/*
hello world %s
hello world %% cs
*/
	// printf("hello world %%% cs \n", a);
	// ft_printf("hello world %%% cs \n", a);
}
