/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-02 17:58:00 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-02 17:58:00 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_accessibility(char **map)
{
	char	**map_dup;
	int		player_x;
	int		player_y;
	int		collectibles;

	map_dup = dup_map(map);
	if (!map_dup)
		return (0);
	if (!find_player(map, &player_x, &player_y))
	{
		free_matriz(map_dup);
		return (0);
	}
	collectibles = count_collectibles(map);
	dfs(map_dup, player_x, player_y, &collectibles);
	if (!validate_accessibility(map_dup) || collectibles > 0)
	{
		free_matriz(map_dup);
		return (0);
	}
	free_matriz(map_dup);
	return (1);
}

void	dfs(char **map, int x, int y, int *collectibles)
{
	if (x < 0 || y < 0 || !map[x] || !map[x][y] || map[x][y] == '1')
		return ;
	if (map[x][y] == 'E' && *collectibles > 0)
		return ;
	if (map[x][y] == 'V')
		return ;
	if (map[x][y] == 'C')
		(*collectibles)--;
	map[x][y] = 'V';
	dfs(map, x - 1, y, collectibles);
	dfs(map, x + 1, y, collectibles);
	dfs(map, x, y - 1, collectibles);
	dfs(map, x, y + 1, collectibles);
}

int	find_player(char **map, int *x, int *y)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				*x = i;
				*y = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
