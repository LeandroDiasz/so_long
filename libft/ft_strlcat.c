/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:58:58 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:58:58 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	result;

	result = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len < dstsize)
		result = dst_len + src_len;
	else
		result = dstsize + src_len;
	i = 0;
	if (dst_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && (dst_len + i) < (dstsize - 1))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (result);
}

/*#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

void	test_strlcat(const char *dst, const char *src, size_t dstsize)
{
	char	dst_ft[50];
	char	dst_ori[50];

	strcpy(dst_ft, dst);
	strcpy(dst_ori, dst);

	size_t result_ft = ft_strlcat(dst_ft, src, dstsize);
	size_t result_ori = strlcat(dst_ori, src, dstsize);
	printf("Testando com dstsize = %zu\n", dstsize);
    printf("Sua ft_strlcat:\nResultado: %zu\nDest: %s\n", result_ft, dst_ft);
    printf("strlcat original:\nResultado: %zu\nDest: %s\n", result_ori, dst_ori);

	if (result_ft == result_ori && strcmp(dst_ft, dst_ori) == 0)
			printf("Test Passed!\n");
    else
        printf("Test Failed!\n");
    printf("---------------------\n");
}

int main(void) {
    test_strlcat("Jamal", " Bieber", 20);
    test_strlcat("Jamal", " Bieber", 10);
    test_strlcat("Jamal", " Bieber", 3);
    test_strlcat("Ja", "", 5);

    return (0);
}*/
