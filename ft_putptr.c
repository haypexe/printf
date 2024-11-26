/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <akehili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:25:52 by akehili           #+#    #+#             */
/*   Updated: 2024/11/26 16:47:45 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, int *count)
{
	unsigned long long	adress;
	char				*hex_digits;
	char				buffer[16];
	int					i;

	hex_digits = "0123456789abcdef";
	adress = (unsigned long long)ptr;
	if (adress == 0)
	{
		ft_putstr("Nothing In Location", count);
		return ;
	}
	ft_putstr("0x", count);
	if (adress == 0)
	{
		ft_putchar('0', count);
		return ;
	}
	i = 0;
	while (adress > 0)
	{
		buffer[i++] = hex_digits[adress % 16];
		adress /= 16;
	}
	while (i > 0)
	{
		ft_putchar(buffer[--i], count);
	}
}
