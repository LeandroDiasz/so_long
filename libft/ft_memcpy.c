/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:19 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:19 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;

	if (!dst && !src)
		return (dst);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(temp_dst++) = *(temp_src++);
		n--;
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

void test_ft_memcpy(void *dst, const void *src, size_t n, size_t size) 
{
    char original_dst[size];
    memcpy(original_dst, dst, size);

    printf("Antes (src): %s\n", (char *)src);
    printf("Antes (dst): %s\n", (char *)dst);

    ft_memcpy(dst, src, n);
    printf("ft_memcpy (dst): %s\n", (char *)dst);

    memcpy(original_dst, src, n);
    printf("memcpy (dst):    %s\n", original_dst);

    if (memcmp(dst, original_dst, size) == 0)
        printf("Test Passed\n");
    else
        printf("Test Failed\n");
    printf("--------------\n");
}

int main() {
    char buffer1[20] = "Hello, World!";
    char buffer2[20] = "Test string...";
    char buffer3[10] = "42School";
    char buffer4[10] = "";

    test_ft_memcpy(buffer2, buffer1, 13, sizeof(buffer2));
    test_ft_memcpy(buffer3, "Libft", 5, sizeof(buffer3));
    test_ft_memcpy(buffer4, "42", 2, sizeof(buffer4));
    test_ft_memcpy(buffer1, buffer1, 5, sizeof(buffer1));

    return (0);
}*/
