/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:54 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:54 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	int			i;
	size_t		j;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			j++;
		while (s[i] != c && s[i])
			i++;
	}
	return (j);
}

static int	malloc_word(char **ptr, int y, size_t len)
{
	int	i;

	i = 0;
	ptr[y] = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr[y])
	{
		while (i < y)
			free(ptr[i++]);
		free(ptr);
		return (1);
	}
	return (0);
}

static int	fill_word(char **ptr, const char *s, char c)
{
	int			y;
	size_t		len;
	const char	*start;

	y = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			++s;
		start = s;
		while (*s != c && *s)
		{
			++s;
			++len;
		}
		if (len)
		{
			if (malloc_word(ptr, y, len))
				return (1);
			ft_strlcpy(ptr[y], start, len + 1);
			y++;
		}
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	size_t	count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	ptr = (char **)malloc((count + 1) * sizeof (char *));
	if (!ptr)
		return (NULL);
	ptr[count] = NULL;
	if (fill_word(ptr, s, c))
		return (NULL);
	return (ptr);
}

/*#include <stdio.h>

int main(void)
{
    char    **result;
    int     i;

    char *str = "Hello 42 school of coding";
    char delimiter = ' ';

    result = ft_split(str, delimiter);

    if (!result)
    {
        printf("Error: split returned NULL\n");
        return (1);
    }

    printf("Split result for string: \"%s\"\n", str);
    i = 0;
    while (result[i])
    {
        printf("Word %d: %s\n", i + 1, result[i]);
        i++;
    }

    i = 0;
    while (result[i])
        free(result[i++]);
    free(result);

    return 0;
}*/