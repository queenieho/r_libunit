# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qho <qho@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/12 13:04:36 by qho               #+#    #+#              #
#    Updated: 2017/02/12 13:10:08 by qho              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_itoab_test.a

CC = gcc

CFLAGS += -Wall -Wextra -Werror

SRC =	00_launcher.c 01_basic_test1.c 02 02_basic_test2.c

OBJ =	$(SRC:.c=.o)

HEADER = includes

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ) : $(SRC)
	$(CC) -c $(CFLAGS) $(SRC) -I $(HEADER)

norm:
	norminette $(SRC) libft.h

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
