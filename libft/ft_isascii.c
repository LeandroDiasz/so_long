/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:54:53 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:54:53 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

void test_ft_isascii(int c) {
    int result = ft_isascii(c);
    if (result != 0)
        printf("ft_isascii(%d) = %d: Passou\n", c, result);
    else
        printf("ft_isascii(%d) = %d: Falhou\n", c, result);
}

int main(void) 
{
    test_ft_isascii(0);
    test_ft_isascii(48);
    test_ft_isascii(65);
    test_ft_isascii(97);
    test_ft_isascii(127);
    test_ft_isascii(-1);
    test_ft_isascii(128);
    test_ft_isascii(255);
    return 0;
}*/