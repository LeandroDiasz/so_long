/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:11:01 by ledias-d          #+#    #+#             */
/*   Updated: 2024/12/27 22:01:12 by leo              ###   ########.fr       */
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
		map[i] = line;
		i++;
	}
	map[i] = NULL;
	return (map);
}

int	map_validate(char **map)
{
	if (!check_rectangle(map))
	{
		error_exit("Erro: The map is not rectangular.\n");
		return (0);
	}
	if (!check_wall(map))
	{
		error_exit("Erro: The map is not surrounded by walls.\n");
		return (0);
	}
	if (!check_elements(map))
	{
		error_exit("Erro: The map does not contain all \
		required elements (P, C, E).\n");
		return (0);
	}
	if (!check_accessibility(map))
	{
		error_exit("Erro: Not all collectibles or exit are accessible.\n");
		return (0);
	}
	return (1);
}

int	check_ber(const char *file)
{
	int	i;
	int	j;

	if (file == NULL && ft_strlen(file) < 4)
		error_exit("Error: null file or insufficient size");
	i = ft_strlen(file) - 4;
	j = 0;
	while (".ber"[j])
	{
		if (file[i + j] != ".ber"[j])
			return (0);
		j++;
	}
	return (1);
}
