/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:59:39 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:59:39 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	i = 0;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (s[start] && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *test_cases[] = {
        "Hello, world!",
        "Libft é incrível",
        "42 Rj",
        "Este é um teste",
        "Substr com string curta",
        NULL
    };

    unsigned int starts[] = {0, 6, 3, 5, 30};
    size_t lengths[] = {5, 4, 10, 20, 5};

    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]) - 1;

    for (int i = 0; i < num_tests; i++)
    {
        const char *str = test_cases[i];
        unsigned int start = starts[i];
        size_t len = lengths[i];

        char *ft_result = ft_substr(str, start, len);
        if (!ft_result)
        {
            printf("ft_substr falhou para a string \"%s\"\n", str);
            return 1;
        }

        printf("Teste %d: String original: \"%s\"\n", i + 1, str);
        printf("start = %u, len = %zu\n", start, len);
        printf("Resultado de ft_substr: \"%s\"\n", ft_result);

        printf("\n");

        free(ft_result);
    }

    return 0;
}*/