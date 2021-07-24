# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 18:35:29 by gandrade          #+#    #+#              #
#    Updated: 2021/07/23 16:14:00 by gandrade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
LIB = ar -rcs
RM = rm -rf

SRCS = ft_printf.c ft_format.c \

OBJS = $(SRCS:.c=.o)

all: libft $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I libft

$(NAME): $(OBJS)
	cp ./libft/libft.a $(NAME)
	$(LIB) $(NAME) $(OBJS)

clean:
	$(MAKE) -C libft clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	$(RM) $(NAME)

libft:
	$(MAKE) -C libft

re: fclean all

.PHONY: all clean fclean libft re