/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 19:24:55 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/08/09 21:41:33 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

#define MAX_HEX_DIGITS 17

void	convert_to_hexadecimal_uppercase(unsigned long n, char *str)
{
	unsigned long	remainder;
	int				i;

	i = 0;
	while (n > 0)
	{
		remainder = n % 16;
		//if remainder is less than 16 (i.e. exhausted all power of 16)
		if (remainder <= 16)
		{
			//if it is 0 to 9
			if (remainder < 10)
				remainder = remainder + '0';
			else
				remainder = remainder - 10 + 'A';
			i++;
		}
		n = n / 16;
	}
	str[i] = '\0';
}

void	convert_to_hexadecimal_lowercase(unsigned long n, char *str)
{
	unsigned long	remainder;
	int				i;

	i = 0;
	while (n > 0)
	{
		remainder = n % 16;
		if (remainder <= 16)
		{
			if (remainder < 10)
				str[i] = remainder + '0';
			else
				remainder = remainder - 10 + 'a';
			i++;
		}
		n = n / 16;
	}
	str[i] = '\0';
}

void	reverse_hexadecimal_order(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
	}
}

int		ft_print_hexadecimal_uppercase(unsigned long n)
{
	unsigned long	remainder;
	char			*hexadecimal_str;
	int				str_len;

	hexadecimal_str = (char*)malloc((MAX_HEX_DIGITS + 1) * sizeof(char));
	if (!hexadecimal_str)
		return;
	if (n == 0)
	{
		ft_putnbr_fd(0,1);
		return (1);
	}
	convert_to_hexadecimal_uppercase(n, hexadecimal_str);
	reverse_hexadecimal_order(hexadecimal_str);
	str_len = ft_strlen(hexadecimal_str);
	ft_putstr_fd(hexadecimal_str, 1);
	free(hexadecimal_str);
	return (str_len);
}

int		ft_print_hexadecimal_lowercase(unsigned long n)
{
	unsigned long	remainder;
	char			*hexadecimal_str;
	int				str_len;

	hexadecimal_str = (char*)malloc((MAX_HEX_DIGITS + 1) * sizeof(char));
	if (!hexadecimal_str)
		return;
	if (n == 0)
	{
		ft_putnbr_fd(0,1);
		return (1);
	}
	convert_to_hexadecimal_lowercase(n, hexadecimal_str);
	reverse_hexadecimal_order(hexadecimal_str);
	str_len = ft_strlen(hexadecimal_str);
	ft_putstr_fd(hexadecimal_str, 1);
	free(hexadecimal_str);
	return (str_len);
}

