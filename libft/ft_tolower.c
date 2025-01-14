/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:59:46 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:59:46 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

void	test_tolower(int c)
{
	int	result_ft, result_ori;

	result_ft = ft_tolower(c);
	result_ori = tolower(c);
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
	test_tolower('A');
	test_tolower('B');
	test_tolower('b');
	test_tolower('c');
	test_tolower(' ');

	return (0);
}*/
