/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 21:58:44 by ledias-d          #+#    #+#             */
/*   Updated: 2024/12/26 21:18:44 by leo              ###   ########.fr       */
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
	dfs(map, x - 1, y, collectibles); //up
	dfs(map, x + 1, y, collectibles); //down
	dfs(map, x, y - 1, collectibles); //left
	dfs(map, x, y + 1, collectibles); //right
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