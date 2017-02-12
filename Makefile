# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qho <qho@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/11 14:56:44 by qho               #+#    #+#              #
#    Updated: 2017/02/11 15:14:33 by qho              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_PATH = /nfs/2016/q/qho/qho/libft-02

CC = gcc

LIB = libunit.a

CFLAGS = -Wall -Wextra -Werror

SRC = main.c

OBJ = $(SRC:.c=.o)

HEADER = 

.PHONY: clean fclean re norm

test:
	$(MAKE) -C $(LIB_PATH) all

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32mCompiled libunit.a"

$(OBJ): $(SRC)
	$(CC) -c $(FLAGS) $(SRC) -I $(HEADER)
	@echo "\033[32mCompiled object files"

norm:
	norminette

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[31mObject files cleaned"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[31mlibunit.a cleaned"

re: fclean all