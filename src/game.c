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
	game->map = map_read(file);
	if (!game->map)
	{
		error_exit("Error reading the map");
		return (0);
	}
	if (!map_validate(game->map))
	{
		error_exit("Invalid map");
		return (0);
	}
	return (1);
}
