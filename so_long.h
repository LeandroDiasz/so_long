/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 15:54:59 by ledias-d          #+#    #+#             */
/*   Updated: 2024-12-16 15:54:59 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# include "minilibx-linux/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include <fcntl.h>


# define WALL 1
# define FLOOR 0
# define BUFFER_SIZE 1024


typedef struct	s_game
{
	void	*mlx;
	void	*win;
	char    **map;
    int     player_x;
    int     player_y;
    int     collectibles;
    int     moves;
}				t_game;

/* --- utils.c ---*/
void	error_exit(const char *message);
int		check_ber(const char *file);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
int		count_lines(char *file);
int		check_accessibility(char **map);
int		check_elements(char **map);
int		check_wall(char **map);
int		check_rectangle(char **map);




/*--- map.c ---*/
char	**map_read(const char *file);
int		map_validate(char **map);
void	map_free(char **map);

/*--- game.c ---*/
void	game_start(t_game *game, char **av);

/*--- events.c ---*/

/*--- render.c ---*/

#endif