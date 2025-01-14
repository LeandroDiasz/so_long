# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ledias-d <ledias-d@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/21 17:00:35 by ledias-d          #+#    #+#              #
#    Updated: 2024/11/07 15:11:14 by ledias-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
ARNAME = ar rcs $(NAME)
RANNAME = ranlib $(NAME)

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
       ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
       ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c

OBJS = $(SRCS:.c=.o)

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
            ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
            ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS_SRC:.c=.o)

TEST_SRC = $(SRCS)
TEST_EXEC = test
TEST_SRC_BONUS = $(BONUS_SRC)

all: $(NAME)

$(NAME): $(OBJS)
	$(ARNAME) $(OBJS)
	$(RANNAME)

test: $(TEST_SRC)
	@$(CC) $(CFLAGS) -o $(TEST_EXEC) $(TEST_SRC)

testbonus: $(TEST_SRC_BONUS)
	@$(CC) $(CFLAGS) -o $(TEST_EXEC) $(TEST_SRC_BONUS) $(TEST_SRC)

bonus: $(OBJS) $(BONUS_OBJS)
	$(ARNAME) $(OBJS) $(BONUS_OBJS)
	$(RANNAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

