/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 15:09:50 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-14 15:09:50 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *string, ...);
int	ft_putchar(char c);
int	print_specifier(char specifier, va_list ap);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putnbr_lowercase(unsigned long long n);
int	ft_putnbr_uppercase(unsigned int n);
int	ft_putnbr_adress(void *adress);

#endif