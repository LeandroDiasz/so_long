/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:54:32 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:54:32 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*temp_ptr;

	temp_ptr = (char *)s;
	while (n > 0)
	{
		*(temp_ptr++) = 0;
		n--;
	}
}

/*#include <stdio.h>
#include <string.h>

void test_ft_bzero(void *s, size_t n, size_t size) 
{
    char original[size];
    memcpy(original, s, size);

    printf("Antes: %s\n", (char *)s);

    ft_bzero(s, n);
    printf("ft_bzero: %s\n", (char *)s);

    bzero(original, n);
    printf("bzero: %s\n", (char *)original);

    if (memcmp(s, original, size) == 0)
        printf("Test Passed\n");
    else
        printf("Test Failed\n");
    printf("--------------\n");
}

int main(void) 
{
    char buffer1[20] = "Hello, World!";
    char buffer2[20] = "Test string...";
    char buffer3[10] = "42School";
    char buffer4[1] = "";

    test_ft_bzero(buffer1, 3, sizeof(buffer1));
    test_ft_bzero(buffer2, 5, sizeof(buffer2));
    test_ft_bzero(buffer3, 0, sizeof(buffer3));
    test_ft_bzero(buffer4, 1, sizeof(buffer4));

    return (0);
}*/