/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 18:53:45 by ledias-d          #+#    #+#             */
/*   Updated: 2024-12-18 18:53:45 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	handle_keypress(int keycode, t_game *game)
{
	if (keycode == ESC_KEY)
		handle_close(game);
	else if (keycode == KEY_ARROW_RIGHT)
		move_player(game, game->player_x + 1, game->player_y);
	else if (keycode == KEY_ARROW_LEFT)
		move_player(game, game->player_x - 1, game->player_y);
	else if (keycode == KEY_ARROW_UP)
		move_player(game, game->player_x, game->player_y - 1);
	else if (keycode == KEY_ARROW_DOWN)
		move_player(game, game->player_x, game->player_y + 1);
	render_map(game);
	return (0);
}

int	handle_close(t_game *game)
{
	mlx_destroy_window(game->mlx, game->win);
	mlx_destroy_display(game->mlx);
	free(game->mlx);
	exit(0);
	return (0);
}

int	move_player(t_game *game, int new_x, int new_y)
{
	char	new_position;

	if (new_x < 0 || new_x >= game->map_width
		|| new_y < 0 || new_y >= game->map_height)
		return (0);
	new_position = game->map[new_y][new_x];
	if (new_position == WALL)
		return (0);
	else if (new_position == COLLECT)
	{
		game->collectibles--;
		game->map[new_y][new_x] = FLOOR;
	}
	else if (!verify_exit(game, new_position, game->collectibles))
		return (0);
	game->map[game->player_y][game->player_x] = FLOOR;
	game->player_x = new_x;
	game->player_y = new_y;
	game->map[new_y][new_x] = PLAYER;
	game->moves++;
	ft_printf("number of movements: %d\n", game->moves);
	return (1);
}

int	verify_exit(t_game *game, char new_position, int collectibles)
{
	if (new_position == EXIT)
	{
		if (collectibles == 0)
			handle_close(game);
		else
			return (0);
	}
	return (1);
}