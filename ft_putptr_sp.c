/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_sp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarhic <mmarhic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 03:19:32 by marvin            #+#    #+#             */
/*   Updated: 2024/12/30 19:48:53 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_sp(void *ptr, int *count)
{
	unsigned long long	adress;
	char				buffer[16];
	int					i;

	adress = (unsigned long long)ptr;
	if (adress == 0)
	{
		ft_putstr_sp("(nil)", count);
		return ;
	}
	ft_putstr_sp("0x", count);
	if (adress == 0)
	{
		ft_putchar_sp('0', count);
		return ;
	}
	i = 0;
	while (adress > 0)
	{
		buffer[i++] = "0123456789abcdef"[adress % 16];
		adress /= 16;
	}
	while (i > 0)
		ft_putchar_sp(buffer[--i], count);
}
