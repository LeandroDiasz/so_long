/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:14 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:14 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	temp_s1 = (unsigned char *)s1;
	temp_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (temp_s1[i] != temp_s2[i])
			return (temp_s1[i] - temp_s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

void	test_memcmp(const void *s1, const void *s2, size_t n)
{
	int result_ft = ft_memcmp(s1, s2, n);
	int result_ori = memcmp(s1, s2, n);

	if (result_ft == result_ori)
		printf("Test passed!\nft_memcmp: %d, memcmp: %d\n", \
		result_ft, result_ori);
	else
		printf("Test failed!\nft_memcmp: %d, memcmp: %d\n", \
		result_ft, result_ori);
}

int	main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	char str3[] = "Hello, Wxrld!";

	
	printf("Test 1: Strings iguais\n");
	test_memcmp(str1, str2, 13); 
	printf("\n");

	
	printf("Test 2: Strings diferentes (primeira diferença no índice 8)\n");
	test_memcmp(str1, str3, 13); 
	printf("\n");

	
	printf("Test 3: Comparação parcial (até a diferença)\n");
	test_memcmp(str1, str3, 8); 
	printf("\n");

	
	printf("Test 4: Comparação de 0 bytes\n");
	test_memcmp(str1, str3, 0); 
	printf("\n");

	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 6};
	printf("Test 5: Arrays de inteiros\n");
	test_memcmp(arr1, arr2, sizeof(int) * 5);
	printf("\n");

	return 0;
}*/