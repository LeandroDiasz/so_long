/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 15:15:11 by ledias-d          #+#    #+#             */
/*   Updated: 2024/11/09 15:53:05 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *string, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, string);
	while (*string)
	{
		if (*string == '%')
			count += print_specifier(*(++string), ap);
		else
			count += ft_putchar(*string);
		string++;
	}
	va_end(ap);
	return (count);
}

/*#include <stdio.h>

int main(void)
{

	int original_count, custom_count;

	// Teste com string
	printf("Testando %%s (string):\n");
	original_count = printf("Original: %s\n", "Olá, Mundo!");
	custom_count = ft_printf("Custom:   %s\n", "Olá, Mundo!");
	printf("Chars escritos -> Original: %d, Custom: \
	%d\n\n", original_count, custom_count);

	// Teste com caractere
	printf("Testando %%c (char):\n");
	original_count = printf("Original: %c\n", 'A');
	custom_count = ft_printf("Custom:   %c\n", 'A');
	printf("Chars escritos -> Original: %d, Custom: \
	%d\n\n", original_count, custom_count);

	// Teste com inteiro
	printf("Testando %%d (int):\n");
	original_count = printf("Original: %d\n", 42);
	custom_count = ft_printf("Custom:   %d\n", 42);
	printf("Chars escritos -> Original: %d, Custom: \
	%d\n\n", original_count, custom_count);

	// Teste com inteiro não sinalizado
	printf("Testando %%u (unsigned int):\n");
	original_count = printf("Original: %u\n", 42);
	custom_count = ft_printf("Custom:   %u\n", 42);
	printf("Chars escritos -> Original: %d, Custom: \
	%d\n\n", original_count, custom_count);

	// Teste com hexadecimal (minúsculas)
	printf("Testando %%x (hexadecimal minúsculo):\n");
	original_count = printf("Original: %x\n", 42);
	custom_count = ft_printf("Custom:   %x\n", 42);
	printf("Chars escritos -> Original: %d, Custom: \
	%d\n\n", original_count, custom_count);

	// Teste com hexadecimal (maiúsculas)
	printf("Testando %%X (hexadecimal maiúsculo):\n");
	original_count = printf("Original: %X\n", 42);
	custom_count = ft_printf("Custom:   %X\n", 42);
	printf("Chars escritos -> Original: %d, Custom: \
	%d\n\n", original_count, custom_count);

	// Teste com ponteiro
	int x = 42;
	printf("Testando %%p (pointer):\n");
	original_count = printf("Original: %p\n", &x);
	custom_count = ft_printf("Custom:   %p\n", &x);
	printf("Chars escritos -> Original: %d, Custom: \
	%d\n\n", original_count, custom_count);

	// Teste com sinal de porcentagem
	printf("Testando %%%% (porcentagem):\n");
	original_count = printf("Original: %%\n");
	custom_count = ft_printf("Custom:   %%\n");
	printf("Chars escritos -> Original: %d, Custom: \
	%d\n\n", original_count, custom_count);
	//ft_printf("%x\n",9223372036854775807LL);
	//printf("%llx\n",9223372036854775807LL);
	return 0;
}*/
