# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 18:35:29 by gandrade          #+#    #+#              #
#    Updated: 2021/07/19 12:48:00 by gandrade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

LIB	=	ar -rcs

RM	=	rm -rf

SRCS	=	ft_printf.c \

OBJS	=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(LIB) $(NAME) $(OBJS)
	@echo "Compiled!"

clean:
	@$(RM) $(OBJS)
	@echo "Cleaned!"

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re