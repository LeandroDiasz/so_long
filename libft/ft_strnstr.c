/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:59:26 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:59:26 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			++j;
		}
		++i;
	}
	return (0);
}

/*#include <stdio.h>
#include <bsd/string.h>

void test_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *result_ft = ft_strnstr(haystack, needle, len);
	char *result_ori = strnstr(haystack, needle, len);

	if (result_ft == result_ori)
		printf("Test passed!\nft_strnstr: %s, strnstr: \
		%s\n", result_ft, result_ori);
	else
		printf("Test failed!\nft_strnstr: %s, strnstr: \
		%s\n", result_ft ? result_ft : "NULL", result_ori ? result_ori : "NULL");
}

int main(void)
{
	printf("Test 1: Needle encontrado no início\n");
	test_strnstr("Hello, World!", "Hello", 13);
	printf("\n");

	printf("Test 2: Needle encontrado no meio\n");
	test_strnstr("Hello, World!", "World", 13);
	printf("\n");

	printf("Test 3: Needle não encontrado\n");
	test_strnstr("Hello", "World", 13);
	printf("\n");

	printf("Test 4: Needle vazio\n");
	test_strnstr("Hello, World!", "", 13);
	printf("\n");

	printf("Test 5: Comparação parcial\n");
	test_strnstr("Hello, World!", "World", 5);  
	printf("\n");

	return 0;
}*/