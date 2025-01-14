/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:24 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:24 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp_dst;
	const char	*temp_src;
	size_t		i;

	if (!src || !dst)
		return (NULL);
	temp_dst = (char *)dst;
	temp_src = (const char *)src;
	i = 0;
	if (temp_dst > temp_src)
	{
		while (len-- > 0)
			temp_dst[len] = temp_src[len];
	}
	else
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

void test_ft_memmove(void *dst, const void *src, size_t len, size_t size)
{
    char original_dst[size];
	char original_src[size];
    memcpy(original_dst, dst, size);
	memcpy(original_src, src, size);

    printf("Antes (src): %s\n", (char *)src);
    printf("Antes (dst): %s\n", (char *)dst);

    ft_memmove(dst, src, len);
    printf("ft_memmove (dst): %s\n", (char *)dst);

    memmove(original_dst, original_src, len);
    printf("memmove (dst):    %s\n", original_dst);

    if (memcmp(dst, original_dst, size) == 0)
        printf("Test Passed\n");
    else
        printf("Test Failed\n");
    printf("--------------\n");
}

int main(void) 
{
    char buffer1[20] = "Hello, World!";
    char buffer2[20] = "Pedro";
   	char buffer3[10] = "42School";
    char buffer4[10] = "";
	test_ft_memmove(buffer2 + 2, buffer2, 3, sizeof(buffer2));
    test_ft_memmove(buffer3, "Libft", 5, sizeof(buffer3));
    test_ft_memmove(buffer4, "42", 2, sizeof(buffer4));
    test_ft_memmove(buffer1, buffer1, 13, sizeof(buffer1));

    return (0);
}*/
