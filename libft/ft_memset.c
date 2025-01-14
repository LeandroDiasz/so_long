/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:28 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:28 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *)b;
	while (len > 0)
	{
		*(temp_ptr++) = (unsigned char)c;
		len--;
	}
	return (b);
}

/*#include <stdio.h>
#include <string.h> 

void	test_ft_memset(void *b, int c, size_t len, size_t size) 
{
    char original[size];
    memcpy(original, b, size);

    printf("Original: %s\n", (char *)b);

    ft_memset(b, c, len);
    printf("ft_memset: %s\n", (char *)b);

    memset(original, c, len);
    printf("memset:    %s\n", original);

    if (memcmp(b, original, size) == 0)
        printf("Test Passed\n");
    else
        printf("Test Failed\n");
    printf("--------------\n");
}

int main(void) 
{
    char buffer1[20] = "";
    char buffer2[20] = "Test string...";
    char buffer3[10] = "42School";
    char buffer4[1] = "";

    test_ft_memset(buffer1, 'A', 5, sizeof(buffer1));
    test_ft_memset(buffer2, 'X', 4, sizeof(buffer2));
    test_ft_memset(buffer3, 'Z', 9, sizeof(buffer3));
    test_ft_memset(buffer4, 'B', 0, sizeof(buffer4));

    return (0);
}*/
