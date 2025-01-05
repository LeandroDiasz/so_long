/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_lowercase_adress.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 21:00:32 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-14 21:00:32 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_adress(void *adress)
{
	unsigned long long	tmp;
	int					count;

	count = 0;
	tmp = (unsigned long long )adress;
	if (tmp == 0)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	if (tmp >= 16)
		count += ft_putnbr_lowercase(tmp / 16);
	if (tmp % 16 < 10)
		count += ft_putchar((tmp % 16) + '0');
	else
		count += ft_putchar((tmp % 16) + 'a' - 10);
	return (count);
}
