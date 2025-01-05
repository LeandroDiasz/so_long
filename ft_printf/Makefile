# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ledias-d <ledias-d@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/21 17:00:35 by ledias-d          #+#    #+#              #
#    Updated: 2024/10/02 14:22:34 by ledias-d         ###   ########.rio       #
#                                                                              #
# **************************************************************************** #

FUNC_NAMES = ft_printf ft_putnbr ft_putchar ft_putstr ft_putnbr_uppercase\
			ft_putnbr_lowercase ft_putnbr_adress ft_putnbr_unsigned\
			print_specifier

SRCS = $(addsuffix .c, $(FUNC_NAMES))
OBJS := $(SRCS:.c=.o)

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RANLIB = ranlib

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

test: $(SRCS)
	$(CC) $(CFLAGS) -o test $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
