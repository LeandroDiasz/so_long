/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:59:01 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:59:01 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	result;

	result = ft_strlen(src);
	if (dstsize == 0)
		return (result);
	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (result);
}

/*#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

void	print_strlcpy(size_t dstsize)
{
	char	dst_ft[100];
	const char	src_ft[] = "Jamal Bieber";

	size_t	result_ft, result_ori;

	char	dst_ori[100];
	const char	src_ori[] = "Jamal Bieber";

	result_ft = ft_strlcpy(dst_ft, src_ft, dstsize);
	result_ori = strlcpy(dst_ori, src_ori, dstsize);
	if (result_ft == result_ori)
		printf("Deu certo!\nvalor ft: %zu\n\
		valor ori: %zu\n", result_ft, result_ori);
	else
		printf("Fez merda paizao\n");
	printf("------------------------\n");
	printf("valor inserido: %zu\n", dstsize);
	printf("Sua ft_strlcpy\nDest: %s\nSource: %s\n", dst_ft, src_ft);
	printf("------------------------\n");
	printf("A strlcpy original\nDest: %s\nSource: %s\n", dst_ori, src_ori);
	printf("###############################\n");
}

int		main(void)
{
	print_strlcpy(100);
	print_strlcpy(8);
	print_strlcpy(3);
	print_strlcpy(0);
}*/
