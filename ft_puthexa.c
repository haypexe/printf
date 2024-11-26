/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <akehili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:19:57 by akehili           #+#    #+#             */
/*   Updated: 2024/11/26 16:53:35 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_non_formel(char n, int *count, unsigned int num)
{
	char	*hex_digits;

	if (n == "x")
	{
		hex_digits = "0123456789abcdef";
	}
	else if (n == "X")
	{
		hex_digits = "0123456789ABCDEF";
	}
	if (n >= 16)
	{
		ft_puthexa_non_formel(num / 16, count, n);
	}
	ft_putchar(hex_digits[num % 16], count);
}

int	ft_puthexa(char n, int *count, unsigned int num)
{
	ft_puthexa_non_formel(n, count, num);
	return (*count);
}
