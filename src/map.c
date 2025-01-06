/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-05 22:23:20 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-05 22:23:20 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**map_read(char *file)
{
	int		fd;
	int		lines;
	char	**map;

	if (!check_ber(file))
		error_exit("Invalid extension. Use .ber\n");
	lines = count_lines(file);
	if (lines <= 0)
		return (NULL);
	map = (char **)malloc(sizeof(char *) *(lines + 1));
	if (!map)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		free_matriz(map);
		return (NULL);
	}
	if (!map_generate(map, fd))
	{
		free_matriz(map);
		return (NULL);
	}
	close (fd);
	return (map);
}

char	**map_generate(char **map, int fd)
{
	char	*line;
	int		i;

	i = 0;
	line = ft_strdup("");
	while (line != NULL)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		if(!ft_strlen(line) || ft_strlen(line) == 1)
			error_exit("Error: The map has an empty line.\n");
		map[i] = line;
		i++;
	}
	map[i] = NULL;
	return (map);
}

int	map_validate(char **map)
{
	if (!check_rectangle(map))
		error_exit("Erro: The map is not rectangular.\n");
	if (!check_wall(map))
		error_exit("Erro: The map is not surrounded by walls.\n");
	if (!check_elements(map))
		error_exit("Erro: The map does not contain all \
		required elements (P, C, E).\n");
	if (!check_accessibility(map))
		error_exit("Erro: Not all collectibles or exit are accessible.\n");
	return (1);
}

int	map_size(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

char	**dup_map(char **map)
{
	char	**map_dup;
	int		size;
	int		i;

	if (!map)
		return (NULL);
	size = map_size(map);
	map_dup = (char **)malloc((size + 1) * sizeof(char *));
	if (!map_dup)
		return (NULL);
	i = 0;
	while (i < size)
	{
		map_dup[i] = ft_strdup(map[i]);
		if (!map_dup[i])
		{
			free_matriz(map_dup);
			return (NULL);
		}
		i++;
	}
	map_dup[i] = NULL;
	return (map_dup);
}
