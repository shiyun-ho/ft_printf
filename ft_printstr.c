/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshi-yun <hshi-yun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 19:54:11 by hshi-yun          #+#    #+#             */
/*   Updated: 2024/08/08 20:05:04 by hshi-yun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printstr(char *s)
{
	int		i;
	int		strlen;

	i = 0;
	if (s == NULL)
		return (0);
	strlen = (int) ft_strlen(s);
	while (i < strlen)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (strlen);
}
