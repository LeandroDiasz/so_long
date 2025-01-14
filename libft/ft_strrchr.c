/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 13:01:27 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 13:01:27 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			let;
	char			*res;

	i = 0;
	let = (char)c;
	res = NULL;
	while (s[i])
	{
		if (s[i] == let)
			res = ((char *) &s[i]);
		i++;
	}
	if (s[i] == let)
		res = ((char *) &s[i]);
	return (res);
}

/*#include <string.h>
#include <stdio.h>

void test_ft_strrchr(const char *s, int c)
{
    char *result_ft = ft_strrchr(s, c);
    char *result_ori = strrchr(s, c);

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
    test_ft_strrchr("HeWllo, World!", 'W');
    test_ft_strrchr("42 School", '4');
    test_ft_strrchr("Sample string", 'z');
    test_ft_strrchr("Find the last 'a'", 'a');
    test_ft_strrchr("End of the line", '\0');

    return (0);
}*/
