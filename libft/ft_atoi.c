/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:54:21 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:54:21 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		imp;
	int		result;

	result = 0;
	i = 0;
	imp = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	else if (str[i] == '-')
	{
		imp *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * imp);
}

/*#include <stdio.h>

int main(void)
{
    const char *test_cases[] = {
        " -  42",
		"42",
        "   -42",
        "+42",
        "0",
        "   123abc",
        "-2147483648",
        "2147483647",
        "",
        "\t\n\r\v\f 42",
        "++42",
        "--42",
        "42abc",
        "   -+42",
    };
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_tests; i++)
    {
        const char *str = test_cases[i];
        int result_ft_atoi = ft_atoi(str);
        int result_atoi = atoi(str);
        printf("Teste %d: \"%s\"\n", i + 1, str);
        printf("ft_atoi = %d, atoi = %d\n", result_ft_atoi, result_atoi);

        if (result_ft_atoi == result_atoi)
            printf("Resultado: OK\n");
        else
            printf("Resultado: Erro\n");

        printf("\n");
    }

    return 0;
}*/
