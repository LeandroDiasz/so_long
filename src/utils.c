/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 16:11:34 by ledias-d          #+#    #+#             */
/*   Updated: 2024-12-16 16:11:34 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			let;

	i = 0;
	let = (char)c;
	while (s[i])
	{
		if (s[i] == let)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == let)
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s1)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	i = 0;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (s[start] && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
