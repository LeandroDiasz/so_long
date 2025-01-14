/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:57 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:57 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			let;

	i = 0;
	let = (char)c;
	while (s[i])
	{
		if (s[i] == let)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == let)
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

void test_ft_strchr(const char *s, int c)
{
    char *result_ft = ft_strchr(s, c);
    char *result_ori = strchr(s, c);

    printf("String: \"%s\", Caractere: '%c'\n", s, c);
    if (result_ft == result_ori)
    {
        printf("Teste bem-sucedido\n");
    }
    else
    {
        printf("Teste falhou\n");
        printf("Resultado ft: %s\n", result_ft ? result_ft : "NULL");
        printf("Resultado ori: %s\n", result_ori ? result_ori : "NULL");
    }
    printf("-------------\n");
}

int main(void)
{
    test_ft_strchr("Hello, World!", 'W');
    test_ft_strchr("42 School", '4');
    test_ft_strchr("Sample string", 'z');
    test_ft_strchr("Find the last 'a'", 'a');
    test_ft_strchr("End of the line", '\0');

    return (0);
}*/
