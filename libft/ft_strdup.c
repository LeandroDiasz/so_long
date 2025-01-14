/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:57:02 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:57:02 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	i = ft_strlen(s1);
	ptr = (char *)malloc(i + 1);
	if (!s1)
		return (NULL);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, i);
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *test_cases[] = {
        "Hello, 42!",
        "",
        "String maior para testar a função de strdup da libft",
        "42",
        NULL
    };
    
    for (int i = 0; test_cases[i] != NULL; i++)
    {
        const char *str = test_cases[i];

        char *ft_result = ft_strdup(str);
        if (!ft_result)
        {
            printf("ft_strdup falhou para a string \"%s\"\n", str);
            return 1;
        }

        char *original_result = strdup(str);
        if (!original_result)
        {
            printf("strdup falhou para a string \"%s\"\n", str);
            free(ft_result);
            return 1;
        }

        printf("Teste %d: \"%s\"\n", i + 1, str);
        printf("ft_strdup: \"%s\"\n", ft_result);
        printf("strdup:    \"%s\"\n", original_result);

        if (strcmp(ft_result, original_result) == 0)
            printf("Resultado: OK\n");
        else
            printf("Resultado: Erro\n");

        printf("\n");

        free(ft_result);
        free(original_result);
    }

    return 0;
}*/