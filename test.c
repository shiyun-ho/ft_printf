/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:38:04 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/08/21 19:57:07 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "limits.h"
#include <assert.h>

int	main(void)
{
	// printf("%p", (void *) 0);
	// ft_printf("%p", (void *) 0);

/**
 * Special case: %
*/
	// printf("\n\n\n//*** Commencing tests on (nil) format specifier ***// \n");
	// printf("printf: \n% |\n");
	// ft_printf("ft_printf: \n% |\n\n");

	// printf("printf: \n%% |\n");
	// ft_printf("ft_printf: \n%% |\n\n");

	// printf("printf: \n%%% \n");
	// ft_printf("ft_printf: \n%%% \n\n");

	// ft_printf("printf: \n% | %% | %%% \n");
	// ft_printf("ft_printf: \n% | %% | %%% \n");

/**
 * Special case: invalid format specifiers
*/
	char character = 'a';

	printf("\n\n\n//*** Commencing tests on invalid format specifier ***// \n");

/**
* -1
* %(null)8

*/
	// assert(printf("%") == ft_printf("%"));

	printf("%d\n", printf("%")); 
	printf("%d\n", ft_printf("%"));

	// printf("printf: \n%y |\n", character);
	// ft_printf("ft_printf: \n%y |\n", character);

	return (1);
}
