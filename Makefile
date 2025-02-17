NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
MLX = -Lminilibx-linux -lmlx_Linux -lXext -lX11 -lm minilibx-linux/libmlx.a $(FT_PRINTF_LIB) $(LIBFT_LIB)

FT_PRINTF_DIR = ft_printf
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a

SRC = src/main.c src/game.c src/map.c src/render.c src/events.c src/check_map.c src/dfs.c src/gnl.c src/erro.c 
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	$(MAKE) -C $(FT_PRINTF_DIR) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(MLX)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(FT_PRINTF_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(FT_PRINTF_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean
re: fclean all
