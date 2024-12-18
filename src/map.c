/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 15:11:01 by ledias-d          #+#    #+#             */
/*   Updated: 2024-12-17 15:11:01 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	**map_read(const char *file)
{
	int		fd;
	int		i;
	int		**map;
	int		line;

	if (!check_ber(file))
			error_exit("Invalid extension. Use .ber\n");
	i = count_lines(file);
	if (i <= 0)
		return (NULL);
	map = (char **)malloc(sizeof(char *) *(i + 1));
	if (!map)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (NULL);
	i = 0;
	line = ft_strdup("");
	while (line != NULL)
	{
		line = get_next_line(fd);
		map[i] = line;
		i++;
	}
	map[i] = NULL;
	close (fd);
	return (map);
}

void	map_free(char **map)
{

}
int	map_validate(char **map)
{
	
}