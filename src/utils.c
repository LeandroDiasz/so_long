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

int	count_lines(char *file)
{
	int		fd;
	int		lines;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	lines = 0;
	line = ft_strdup("");
	while (line != NULL)
	{
		line = get_next_line(fd);
		lines++;
		free (line);
	}
	close (fd);
	return (lines);
}

int	check_ber(const char *file)
{
	int	i;
	int	j;

	i = 0;
	while (file[i])
		i++;
	i -= 4;
	if (i < 0)
		return (0);
	j = 0;
	while (".ber"[j])
	{
		if (file[i + j] != ".ber"[j])
			return(0);
		j++;
	}
	return (1);
}

int	check_rectangle(char **map)
{
	int	i;
	
}

int	check_wall(char **map)
{
	
}

int	check_elements(char **map)
{
	
}

int	check_accessibility(char **map)
{
	
}

void	error_exit(const char *message)
{
	perror("Error");
	write(1, message, ft_strlen(message));
	exit(EXIT_FAILURE);
}