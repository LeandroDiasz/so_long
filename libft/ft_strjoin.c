/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:57:18 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:57:18 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

/*#include <string.h>
#include <stdio.h>

int main(void)
{
    const char *test_cases_s1[] = {
        "Hello, ",
        "",
        "42 ",
        "Testing ",
        NULL
    };

    const char *test_cases_s2[] = {
        "World!",
        "Empty",
        "Rio de janeiro",
        "Strjoin function",
        NULL
    };

    for (int i = 0; test_cases_s1[i] != NULL; i++)
    {
        const char *s1 = test_cases_s1[i];
        const char *s2 = test_cases_s2[i];

        char *ft_result = ft_strjoin(s1, s2);
        if (!ft_result)
        {
            printf("ft_strjoin falhou para a \
			: \"%s\" + \"%s\"\n", s1, s2);
            return 1;
        }

        size_t total_len = strlen(s1) + strlen(s2) + 1;
        char *expected_result = malloc(total_len);
        if (!expected_result)
        {
            printf("Falha ao alocar memória para o teste.\n");
            free(ft_result);
            return 1;
        }
        strcpy(expected_result, s1);
        strcat(expected_result, s2);

        printf("Teste %d: \"%s\" + \"%s\"\n", i + 1, s1, s2);
        printf("ft_strjoin: \"%s\"\n", ft_result);
        printf("Resultado esperado: \"%s\"\n", expected_result);

        if (strcmp(ft_result, expected_result) == 0)
            printf("Resultado: OK\n");
        else
            printf("Resultado: Erro\n");

        printf("\n");

        free(ft_result);
        free(expected_result);
    }

    return (0);
}*/