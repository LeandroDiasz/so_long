/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:09 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:09 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp_s;
	size_t			i;
	char			let;

	i = 0;
	let = (char)c;
	temp_s = (unsigned char *)s;
	while (i < n)
	{
		if (temp_s[i] == let)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

void test_ft_memchr(const char *s, int c, size_t n)
{
	void *result_ft = ft_memchr(s, c, n);
	void *result_ori = memchr(s, c, n);

	printf("Buscando '%c' em \"%s\" até %zu caracteres:\n", c, s, n);
	if (result_ft == result_ori)
	{
		printf("Teste bem-sucedido!\n");
	}
	else
	{
		printf("Teste falhou!\n");
		printf("Resultado ft_memchr: %p\n", result_ft);
		printf("Resultado memchr: %p\n", result_ori);
	}
	printf("-------------\n");
}

int main(void)
{
	test_ft_memchr("Hello, World!", 'W', 13);
	test_ft_memchr("Hello, World!", 'z', 13);
	test_ft_memchr("42 Network", 'N', 5);
	test_ft_memchr("42 Network", 'k', 9);
	test_ft_memchr("42 Network", '4', 1);
	test_ft_memchr("42 Network", '\0', 20);

	return 0;
}*/