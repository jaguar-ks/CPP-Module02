# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 10:31:17 by faksouss          #+#    #+#              #
#    Updated: 2023/09/04 11:59:53 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp

HDR = Fixed.hpp

OBJ_DIR = obj

SRC_DIR = src

FLG = -Wall -Wextra -Werror -std=c++98

OBJ =  $(SRC:.cpp=.o)

INC = -I .

NAME = Fixed

# x : 
# 	echo $(OBJ)
all : $(NAME)

$(NAME) : $(OBJ)
	echo $@ $^
	c++ $(FLG) $^ -o $@

%.o : $(SRC_DIR)/%.c $(HDR)
	mkdir -p $(OBJ_DIR)
	c++ $(FLG) -c $(INC) $< -o $@

clean :
	rm -rf obj

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all fclean clean re

.SILENT : all $(NAME) clean fclean re $(OBJ) x
