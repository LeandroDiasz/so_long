/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:13:46 by ledias-d          #+#    #+#             */
/*   Updated: 2024/12/27 21:59:55 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	game_start(t_game *game, char *file)
{
	game->map = map_read(file);
	if (!game->map)
	{
		error_exit("Error reading the map");
		return (0);
	}
	if(!map_validate(game->map))
	{
		error_exit("Invalid map");
		return (0);
	}
	return (1);
}