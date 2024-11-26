/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <akehili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:21:04 by akehili           #+#    #+#             */
/*   Updated: 2024/11/26 17:04:24 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdarg.h"

int	ft_checking(char pourcent, va_list int *n)
{
	pourcent = '%';
	if (pourcent + 1 == 'c')
		ft_putchar((va_list, int), n);
	else if (pourcent + 1 == 's')
		ft_putstr((va_list, int), n);
	else if (pourcent + 1 == 'p')
		ft_putptr((va, int), n);
	else if (pourcent + 1 == 'd')
		ft_putnbr((va_list, int), n);
	else if (pourcent + 1 == 'i')
		ft_putnbr((va_list, int), n);
	else if (pourcent + 1 == 'u')
		ft_putnbr_unsigned((va_list, int), n);
	else if (pourcent + 1 == 'x')
		ft_puthexa((va_list, int), n);
	else if (pourcent + 1 == 'X')
		ft_puthexa((va_list, int), n);
	else if (pourcent + 1 == '%')
}
int	ft_printf(const char *format, ...)
{
	int	i;

	i = 0;
	va_list;
	va_start(format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_checking(va_arg(format, int)) i++;
		}
		i++;
	}
	va_end;
	return (i);
}
