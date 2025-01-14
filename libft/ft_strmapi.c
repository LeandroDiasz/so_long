/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:59:13 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:59:13 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*char	to_upper_odd_index(unsigned int i, char c)
{
	if (i % 2 == 1 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c); 
}

#include <stdio.h>

int main(void)
{
    char *str = "abcdef";
    char *result = ft_strmapi(str, to_upper_odd_index);

    printf("Resultado: %s\n", result);
    free(result);
    return (0);
}*/