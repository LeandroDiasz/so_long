/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:54:47 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:54:47 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

void test_ft_isalpha(int c) {
	int result = ft_isalpha(c);
	if (result != 0)
		printf("ft_isalpha(%c) = %d: Passou\n", c, result);
    else
		printf("ft_isalpha(%c) = %d: Falhou\n", c, result);
}

int main(void) 
{
    test_ft_isalpha('A');
    test_ft_isalpha('Z');
    test_ft_isalpha('a');
    test_ft_isalpha('z');
    test_ft_isalpha('1');
    test_ft_isalpha('!');
    test_ft_isalpha(' ');
    test_ft_isalpha(-5);
    test_ft_isalpha(128);
    return 0;
}*/