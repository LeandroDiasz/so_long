/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:54:42 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:54:42 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

void test_ft_isalnum(int c) {
    int result = ft_isalnum(c);
    if (result != 0)
        printf("ft_isalnum(%c) = %d: Passou\n", c, result);
    else
        printf("ft_isalnum(%c) = %d: Falhou\n", c, result);
}

int main(void) 
{
    test_ft_isalnum('A');
    test_ft_isalnum('Z');
    test_ft_isalnum('a');
    test_ft_isalnum('z');
    test_ft_isalnum('0');
    test_ft_isalnum('9');
    test_ft_isalnum('!');
    test_ft_isalnum(' ');
    test_ft_isalnum('%');
    test_ft_isalnum(-5);
    test_ft_isalnum(128);
	return 0;
}*/