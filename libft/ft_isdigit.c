/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:54:59 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:54:59 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

void test_ft_isdigit(int c) {
    int result = ft_isdigit(c);
    if (result != 0)
        printf("ft_isdigit(%c) = %d: Passou\n", c, result);
    else
        printf("ft_isdigit(%c) = %d: Falhou\n", c, result);
}

int main(void) 
{
    test_ft_isdigit('0');
    test_ft_isdigit('5');
    test_ft_isdigit('9');
    test_ft_isdigit('a');
    test_ft_isdigit('Z');
    test_ft_isdigit('!');
    test_ft_isdigit(-3);
    test_ft_isdigit(128);
    return 0;
}*/