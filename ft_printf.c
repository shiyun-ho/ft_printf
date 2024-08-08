/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:51:34 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/08/08 19:54:25 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	check_format_specifier(char param, va_list args)
{
	int	print_strlen;

	print_strlen = 0;
	if (param == 'c')
		print_strlen += ft_printchar(va_arg(args, int));
	if (param == 's')
		print_strlen += ft_printstr(va_arg(args, char *));
	return (print_strlen);
}
/**
 * @brief Print ARGUMENT(s) according to FORMAT
 * @param {const char*} input: Takes in str
 * @param {...} variadic arg: Signals to take in variadic arguments
 * @returns {count} number of characters printed
 */
int	ft_printf(const char *input, ...)
{
	va_list			args;
	unsigned int	i;
	int				print_strlen;

	// list of arguments passed to function
	// initialise access to va_list
	va_start(args, input);
	i = 0;
	print_strlen = 0;
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			print_strlen += check_format_specifier(input[i], args);
		}
		else
			print_strlen += ft_printchar((char)input[i]);
		i++;
	}
	va_end(args);
	return (print_strlen);
}
