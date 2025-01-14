/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:57:08 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:57:08 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void modify_char(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
    printf("Modificado o índice %d: %c\n", index, *c);
}

void test_ft_striteri(void)
{
    char str[] = "hello world!";
    
    printf("String original: %s\n", str);
    ft_striteri(str, modify_char);
    printf("String modificada: %s\n", str);
}

int main(void)
{
    test_ft_striteri();
    return 0;
}*/