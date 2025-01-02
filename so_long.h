/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:54:59 by ledias-d          #+#    #+#             */
/*   Updated: 2024/12/27 21:50:48 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 1024

typedef struct s_sprites
{
	void	*wall;
	void	*floor;
	void	*player;
	void	*collectible;
	void	*exit;
}	t_sprites;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	char		**map;
	int			map_width;
	int			map_height;
	int			sprite_width;
	int			sprite_height;
	int			player_x;
	int			player_y;
	int			collectibles;
	int			moves;
	t_sprites	sprites;
}			t_game;

/*--- check_map.c ---*/
int		check_elements(char **map);
int		check_wall(char **map);
int		check_rectangle(char **map);
int		check_aux(char element, int *exit, int *player, int *collectibles);

/*--- check_utils.c--c*/
char	**dup_map(char **map);
int		map_size(char **map);
int		count_collectibles(char **map);
int		validate_accessibility(char **map);

/*--- erro.c ---*/
void	error_exit(const char *message);
void	free_matriz(char	**matriz);

/* --- utils.c ---*/
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);

/*--- gnl.c ---*/
char	*fill_line(int fd, char *backup, char *buffer);
char	*set_line(char **backup);
char	*get_next_line(int fd);
int		count_lines(char *file);

/*--- dfs.c ---*/
int		check_accessibility(char **map);
void	dfs(char **map, int x, int y, int *collectibles);
int		find_player(char **map, int *x, int *y);

/*--- map.c ---*/
char	**map_read(char *file);
int		map_validate(char **map);
int		check_ber(const char *file);
char	**map_generate(char **map, int fd);

/*--- game.c ---*/
int		game_start(t_game *game, char *file);

/*--- events.c ---*/

/*--- render.c ---*/
void	render_map(t_game *game);
void	render_tile(t_game *game, int x, int y, char tile);
void	load_sprites(t_game *game);
void	load_sprite(void **sprite, char *path, t_game *game);

#endif
