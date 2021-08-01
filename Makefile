# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 18:35:29 by gandrade          #+#    #+#              #
#    Updated: 2021/08/01 01:49:41 by gandrade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = $(wildcard ./*.c)
OBJS = $(SRCS:.c=.o)

INCLUDES = -I libft/includes

CC = clang
CFLAGS = -Wall -Wextra -Werror

LIB = ar -rcs

RM = rm -rf

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: libft $(NAME)

$(NAME): $(OBJS)
	@cp ./libft/libft.a $(NAME)
	@$(LIB) $(NAME) $(OBJS)
	@echo "Compiled!"

clean:
	@$(MAKE) -C libft clean
	@$(RM) $(OBJS)
	@echo "Cleaned!"

fclean: clean
	@$(MAKE) -C libft fclean
	@$(RM) $(NAME)
	@echo "Full Cleaned!"

libft:
	@$(MAKE) -C libft

re: fclean all

.PHONY: all clean fclean libft re