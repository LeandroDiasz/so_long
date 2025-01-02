/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:55:45 by ledias-d          #+#    #+#             */
/*   Updated: 2024/12/27 23:04:56 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(int ac, char **av)
{
	t_game game;
	
	if (ac != 2)
	{
		error_exit("Number of arguments invalid\n");
		return (1);
	}	
	if(!game_start(&game, av[1]))
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