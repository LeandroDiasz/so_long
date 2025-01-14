/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:53:56 by ledias-d          #+#    #+#             */
/*   Updated: 2024/10/11 10:11:59 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	to_find(char const *set, char *s)
{
	int		i;

	ft_memset(s, 0, 256);
	i = 0;
	while (set[i])
		s[(unsigned char)set[i++]] = 1;
}

static int	calc(char const *s1, char const *set, int y)
{
	int		i;
	char	s[256];

	to_find(set, s);
	i = y;
	if (y == 0)
	{
		while (s1[i] && s[(unsigned char)s1[i]] == 1)
			i++;
	}
	else
	{
		while (i > 0 && s[(unsigned char)s1[i]] == 1)
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	if (!s1 || !set)
		return (NULL);
	k = 0;
	i = calc(s1, set, 0);
	j = calc(s1, set, ft_strlen(s1) - 1);
	if (i > j)
		return (ft_strdup(""));
	ptr = (char *)malloc((j - i + 2) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i <= j)
		ptr[k++] = s1[i++];
	ptr[k] = '\0';
	return (ptr);
}

/*#include <stdio.h>

int main(void)
{
    char *s1 = "sababaaca My name is Simon bbacaabba";
    char *set = "abc";
    char *result = ft_strtrim(set, s1);

    printf("Resultado: '%s'\n", result);

    free(result);
    return (0);
}*/