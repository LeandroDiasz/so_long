/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 21:02:13 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-14 21:02:13 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uppercase(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_uppercase(n / 16);
	if (n % 16 < 10)
		count += ft_putchar((n % 16) + '0');
	else
		count += ft_putchar((n % 16) + 'A' - 10);
	return (count);
}
