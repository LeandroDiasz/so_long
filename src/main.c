/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-02 17:59:22 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-02 17:59:22 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(int ac, char **av)
{
	t_game	game;

	if (ac != 2)
	{
		ft_printf("Error: Invalid number of arguments\n");
		return (1);
	}
	if (!game_start(&game, av[1]))
		return (1);
	game.mlx = mlx_init();
	game.win = mlx_new_window(game.mlx, game.map_width * 64, \
	game.map_height * 64, WIN_NAME);
	load_sprites(&game);
	render_map(&game);
	mlx_hook(game.win, KeyPress, KeyPressMask, &handle_keypress, &game);
	mlx_hook(game.win, DestroyNotify, StructureNotifyMask, \
	&handle_close, &game);
	mlx_loop(game.mlx);
	return (0);
}
