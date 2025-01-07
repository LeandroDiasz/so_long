/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erro.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-02 17:58:17 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-02 17:58:17 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	error_exit(const char *message, char **to_free)
{
	if (to_free)
		free_matriz(to_free);
	write(1, message, ft_strlen(message));
	exit(EXIT_FAILURE);
}

void	free_matriz(char **matriz)
{
	int	i;

	if (!matriz)
		return ;
	i = 0;
	while (matriz[i])
	{
		free(matriz[i]);
		i++;
	}
	free (matriz);
}

void free_game(t_game *game)
{
	free_images(game);
	free_matriz(game->map);
    if (game->mlx)
    {
        mlx_destroy_window(game->mlx, game->win);
        mlx_destroy_display(game->mlx);
        free(game->mlx);
    }
}

void free_images(t_game *game)
{
    if (game->sprites.player)
        mlx_destroy_image(game->mlx, game->sprites.player);
    if (game->sprites.wall)
        mlx_destroy_image(game->mlx, game->sprites.wall);
    if (game->sprites.collectible)
        mlx_destroy_image(game->mlx, game->sprites.collectible);
    if (game->sprites.exit)
        mlx_destroy_image(game->mlx, game->sprites.exit);
    if (game->sprites.floor)
        mlx_destroy_image(game->mlx, game->sprites.floor);
}
