/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:38:04 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/08/23 20:17:31 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "limits.h"
#include <assert.h>

int	main(void)
{
/**
 * Special case: %
*/
	printf("\n\n\n//*** Commencing tests on (nil) format specifier ***// \n");
	printf("printf: \n% |\n");
	ft_printf("ft_printf: \n% |\n\n");
	printf("Expected: >>> %d\n", printf("\n% |\n"));
	printf("Actual: >>> %d\n", ft_printf("\n% |\n"));

	printf("printf: \n%% |\n");
	ft_printf("ft_printf: \n%% |\n\n");
	printf("Expected: >>> %d\n", printf("\n%% |\n"));
	printf("Actual: >>> %d\n", ft_printf("\n%% |\n"));

	printf("printf: \n%%% \n");
	ft_printf("ft_printf: \n%%% \n\n");
	printf("Expected: >>> %d\n", printf("\n%%% \n"));
	printf("Actual: >>> %d\n", ft_printf("\n%%% \n"));

	ft_printf("printf: \n% | %% | %%% \n");
	ft_printf("ft_printf: \n% | %% | %%% \n");
	printf("Expected: >>> %d\n", printf("\n%%%% \n"));
	printf("Actual: >>> %d\n", ft_printf("\n%%%% \n"));

	printf("\n\n\n\n");

/**
 * Special case: invalid format specifiers
*/
	char character = 'a';

	printf("\n\n\n//*** Commencing tests on strlen for invalid format specifier ***// \n\n\n");

	printf("printf(1): %\n");
	ft_printf("printf(1): %\n");
	printf("Expected: >>> %d\n", printf("%"));
	printf("Actual: >>> %d\n", ft_printf("%"));
	printf("\n\n");

	printf("printf(2): %%\n");
	ft_printf("printf(2): %%\n");
	printf("Expected: >>> %d\n", printf("%%"));
	printf("Actual: >>> %d\n", ft_printf("%%"));
	printf("\n\n");

	printf("printf(3): %%%\n");
	ft_printf("printf(3): %%%\n");
	printf("Expected: >>> %d\n", printf("%%%"));
	printf("Actual: >>> %d\n", ft_printf("%%%"));
	printf("\n\n");

	printf("printf(4): %%%%\n");
	ft_printf("printf(4): %%%%\n");
	printf("Expected: >>> %d\n", printf("%%%%"));
	printf("Actual: >>> %d\n", ft_printf("%%%%"));
	printf("\n\n");

	printf("printf(5): %%%%%\n");
	ft_printf("printf(5): %%%%%\n");
	printf("Expected: >>> %d\n", printf("%%%%%"));
	printf("Actual: >>> %d\n", ft_printf("%%%%%"));
	printf("\n\n");

	printf("printf(6): %%%%%%\n");
	ft_printf("printf(6): %%%%%%\n");
	printf("Expected: >>> %d\n", printf("%%%%%%"));
	printf("Actual: >>> %d\n", ft_printf("%%%%%%"));
	printf("\n\n");

	printf("printf(7): %%%%%%%\n");
	ft_printf("printf(7): %%%%%%%\n");
	printf("Expected: >>> %d\n", printf("%%%%%%%"));
	printf("Actual: >>> %d\n", ft_printf("%%%%%%%"));

	printf("\n\n\n\n");

	/***
	 *
	 */
	printf("\n\n\n//*** Commencing tests on strlen for invalid format specifier (mix) ***// \n\n\n");


	printf("%y", character);
	ft_printf("%y", character);
	printf("\n\n\n");
	printf("Expected: >>> %d\n", printf("%y", character));
	printf("Actual: >>> %d\n", ft_printf("%y", character));

	printf("printf:| \n%y |\n", character);
	ft_printf("ft_printf:| \n%y |\n", character);
	printf("\n\n\n");
	printf("Expected: >>> %d\n", printf("|\n%y |\n|", character));
	printf("Actual: >>> %d\n", ft_printf("|\n%y |\n|", character));
	
	printf("\n\n\n\n");


	return (1);
}
