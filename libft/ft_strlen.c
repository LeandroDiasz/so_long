/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:59:08 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:59:08 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*#include <stdio.h>

void test_ft_strlen(const char *s, size_t expected) {
    size_t result = ft_strlen(s);
    if (result == expected)
        printf("ft_strlen(\"%s\") = %zu: Passed\n", s, result);
    else
        printf("ft_strlen(\"%s\") = %zu: \
		Failed (expected %zu)\n", s, result, expected);
}

int	main(void) 
{
    test_ft_strlen("Hello, World!", 13);
    test_ft_strlen("42", 2);
    test_ft_strlen("", 0);
    test_ft_strlen("Libft", 5);

    test_ft_strlen("  Space before", 13);
    test_ft_strlen("Space after  ", 12);
    test_ft_strlen("Special! @#*$", 12);

    return (0);
}*/
