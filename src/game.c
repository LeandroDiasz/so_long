/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-02 17:58:46 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-02 17:58:46 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	game_start(t_game *game, char *file)
{
	int		player_x;
	int		player_y;

	player_x = 0;
	player_y = 0;
	game->map = map_read(file);
	if (!game->map)
		error_exit("Error reading the map", game->map);
	if (!map_validate(game->map))
		error_exit("Invalid map", game->map);
	game->moves = 0;
	game->map_height = map_size(game->map);
	game->map_width = ft_strlen(game->map[0]);
	game->collectibles = count_collectibles(game->map);
	find_player(game->map, &player_x, &player_y);
	game->player_x = player_x;
	game->player_y = player_y;
	return (1);
}
