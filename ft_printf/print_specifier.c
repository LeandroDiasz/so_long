/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 21:03:20 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-14 21:03:20 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_specifier(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_putnbr_adress(va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_putnbr_lowercase(va_arg(ap, unsigned int));
	else if (specifier == 'X')
		count += ft_putnbr_uppercase(va_arg(ap, unsigned int));
	else if (specifier == '%')
		count += ft_putchar('%');
	return (count);
}
