/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:59:19 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:59:19 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

void test_ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int result_ft = ft_strncmp(s1, s2, n);
    int result_ori = strncmp(s1, s2, n);

    printf("Comparando \"%s\" e \"%s\" até %zu caracteres:\n", s1, s2, n);
    if (result_ft == result_ori)
    {
        printf("Teste bem-sucedido\n");
    }
    else
    {
        printf("Teste falhou\n");
        printf("Resultado ft_strncmp: %d\n", result_ft);
        printf("Resultado strncmp: %d\n", result_ori);
    }
    printf("-------------\n");
}

int main(void)
{
    test_ft_strncmp("Hello, World!", "Hello, World!", 5);
    test_ft_strncmp("42 School", "42 School", 20);
    test_ft_strncmp("Test", "test", 4);
    test_ft_strncmp("Short", "Shorter", 5);
    test_ft_strncmp("ABCD", "ABCD", 0);

    return (0);
}*/
