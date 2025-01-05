/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 21:01:34 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-14 21:01:34 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_lowercase(unsigned long long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putnbr_lowercase(n / 16);
	if (n % 16 < 10)
		count += ft_putchar((n % 16) + '0');
	else
		count += ft_putchar((n % 16) + 'a' - 10);
	return (count);
}
