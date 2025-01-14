/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:05 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:05 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

void test_ft_isprint(int c) {
    int result = ft_isprint(c);
    if (result != 0)
        printf("ft_isprint(%d) = %d: Passou\n", c, result);
    else
        printf("ft_isprint(%d) = %d: Falhou\n", c, result);
}

int main() {
    // Testes com caracteres imprimíveis (espaço a '~')
    test_ft_isprint(32);  // ' '
    test_ft_isprint(48);  // '0'
    test_ft_isprint(65);  // 'A'
    test_ft_isprint(97);  // 'a'
    test_ft_isprint(126); // '~'

    // Testes com caracteres não imprimíveis (fora do intervalo 32-126)
    test_ft_isprint(31);  // Antes do espaço
    test_ft_isprint(127); // DEL (não imprimível)
    test_ft_isprint(-5);  // Valor negativo
    test_ft_isprint(200); // Valor além de 126

    return 0;
}*/
