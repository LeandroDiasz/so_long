/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:54:38 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:54:38 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	if (count != 0 && size != 0 && (count * size) / size != count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    size_t count = 10;
    size_t size = sizeof(int);

    int *ft_calloc_ptr = (int *)ft_calloc(count, size);
    if (!ft_calloc_ptr)
    {
        printf("ft_calloc: Falha ao alocar memória\n");
        return (1);
    }

    int *calloc_ptr = (int *)calloc(count, size);
    if (!calloc_ptr)
    {
        printf("calloc: Falha ao alocar memória\n");
        return (1);
    }

    if (memcmp(ft_calloc_ptr, calloc_ptr, count * size) == 0)
        printf("Memória alocada e zerada corretamente: OK\n");
    else
        printf("Memória não foi zerada corretamente: Erro\n");

    free(ft_calloc_ptr);
    free(calloc_ptr);

    return 0;
}*/