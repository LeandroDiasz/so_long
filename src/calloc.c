/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-07 22:16:00 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-07 22:16:00 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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