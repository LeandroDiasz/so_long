/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 13:00:28 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 13:00:28 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

void	test_toupper(int c)
{
	int	result_ft, result_ori;

	result_ft = ft_toupper(c);
	result_ori = toupper(c);
	if (result_ft == result_ori)
	{
		printf("Teste bem sucedido\nResultado da ft = %d\n\
		Resultado da ori = %d\n",result_ft, result_ori);
		printf("-------------\n");
	}
	else
		printf("Fez merda seu burro");
}

int		main(void)
{
	test_toupper('A');
	test_toupper('B');
	test_toupper('b');
	test_toupper('c');
	test_toupper(' ');

	return (0);
}*/
