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
		error_exit("Number of arguments invalid\n");
		return (1);
	}	
	if (!game_start(&game, av[1]))
		return (1);
	game.mlx = mlx_init();
	game.map_height = map_size(game.map);
	game.map_width = ft_strlen(game.map[0]);
	game.win = mlx_new_window(game.mlx, game.map_width * 64, \
	game.map_height * 64, "so_long");
	load_sprites(&game);
	render_map(&game);
	mlx_loop(game.mlx);
	return (0);
}
