/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:54:07 by ledias-d          #+#    #+#             */
/*   Updated: 2024/12/28 01:12:44 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	load_sprite(void **sprite, char *path, t_game *game)
{
	*sprite = mlx_xpm_file_to_image(game->mlx, path, \
	&game->sprite_width, &game->sprite_height);
	if (!(*sprite))
		error_exit("Error: Failed to load sprite");
}

void	load_sprites(t_game *game)
{
	load_sprite(&game->sprites.wall, "textures/wall_bomb.xpm", game);
	load_sprite(&game->sprites.floor, "textures/floor_bomb.xpm", game);
	load_sprite(&game->sprites.player, "textures/player_bomb.xpm", game);
	load_sprite(&game->sprites.collectible, \
	"textures/collectible_bomb.xpm", game);
	load_sprite(&game->sprites.exit, "textures/door_bomb.xpm", game);
}

void	render_tile(t_game *game, int x, int y, char tile)
{
	void	*sprite;

	if (tile == '1')
		sprite = game->sprites.wall;
	else if (tile == '0')
		sprite = game->sprites.floor;
	else if (tile == 'P')
		sprite = game->sprites.player;
	else if (tile == 'C')
		sprite = game->sprites.collectible;
	else if (tile == 'E')
		sprite = game->sprites.exit;
	else
		return ;
	mlx_put_image_to_window(game->mlx, game->win, sprite, \
	x * game->sprite_width, y * game->sprite_height);
}

void	render_map(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			render_tile(game, x, y, game->map[y][x]);
			x++;
		}
		y++;
	}
}
