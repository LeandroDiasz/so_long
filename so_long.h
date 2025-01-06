/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-06 21:32:54 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-06 21:32:54 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <X11/X.h>
# include <X11/keysym.h>
# include "ft_printf/ft_printf.h"

# define BUFFER_SIZE 1024
# define WALL '1'
# define FLOOR '0'
# define PLAYER 'P'
# define EXIT 'E'
# define COLLECT 'C'
# define WIN_NAME "so_long"

#define ESC_KEY 65307
#define KEY_ARROW_RIGHT 100
#define KEY_ARROW_LEFT 97
#define KEY_ARROW_UP 119
#define KEY_ARROW_DOWN 115

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

/*--- game.c ---*/
int		game_start(t_game *game, char *file);

/*--- map.c ---*/
char	**map_read(char *file);
int		map_validate(char **map);
char	**map_generate(char **map, int fd);
char	**dup_map(char **map);
int		map_size(char **map);

/*--- check_map.c ---*/
int		check_elements(char **map);
int		check_wall(char **map);
int		check_rectangle(char **map);
int		check_aux(char element, int *exit, int *player, int *collectibles);
int		check_ber(const char *file);

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
int		validate_accessibility(char **map);
int		count_collectibles(char **map);

/*--- events.c ---*/
int move_player(t_game *game, int new_x, int new_y);
int	handle_close(t_game *game);
int	handle_keypress(int keycode, t_game *game);
int	verify_exit(t_game *game, char new_position, int collectibles);

/*--- render.c ---*/
void	render_map(t_game *game);
void	render_tile(t_game *game, int x, int y, char tile);
void	load_sprites(t_game *game);
void	load_sprite(void **sprite, char *path, t_game *game);

/*--- erro.c ---*/
void	error_exit(const char *message);
void	free_matriz(char	**matriz);

#endif
