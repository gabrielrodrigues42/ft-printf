# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 01:33:41 by gandrade          #+#    #+#              #
#    Updated: 2021/08/01 01:36:49 by gandrade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DIR_SRCS = sources
DIR_OBJS = objects
SUB_DIRS = is to put mem str lst gnl

SRCS_DIRS = $(foreach dir, $(SUB_DIRS), $(addprefix $(DIR_SRCS)/, $(dir)))
OBJS_DIRS = $(foreach dir, $(SUB_DIRS), $(addprefix $(DIR_OBJS)/, $(dir)))
SRCS = $(foreach dir, $(SRCS_DIRS), $(wildcard $(dir)/*.c))
OBJS = $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

INCLUDES = -I includes

CC = clang
CFLAGS = -Wall -Wextra -Werror

LIB = ar -rcs

RM = rm -rf

$(DIR_OBJS)/%.o: $(DIR_SRCS)/%.c
	@mkdir -p $(DIR_OBJS) $(OBJS_DIRS)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(LIB) $(NAME) $(OBJS)

clean:
	@$(RM) $(DIR_OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re