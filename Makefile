NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
MLX = -Lminilibx-linux -lmlx_Linux -lXext -lX11 -lm minilibx-linux/libmlx.a

SRC = src/main.c src/game.c src/map.c src/render.c src/events.c src/utils.c src/check_map.c src/dfs.c src/gnl.c src/erro.c src/check_utils.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
