/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:52:44 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/08/09 21:42:45 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char* input, ...);
int		ft_printchar(char c);
int		ft_printstr(char *s);
int		ft_printnbr(int value);
int		ft_print_unsigned_int(unsigned int value);
int		ft_print_hexadecimal_lowercase(unsigned long n);
int		ft_print_hexadecimal_uppercase(unsigned long n);

#endif
