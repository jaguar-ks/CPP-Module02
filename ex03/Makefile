# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 22:52:33 by faksouss          #+#    #+#              #
#    Updated: 2023/09/13 03:29:11 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Fixed.cpp Point.cpp

HDR = inc/Fixed.hpp inc/Point.hpp

OBJ_DIR = obj

SRC_DIR = src

FLG = -Wall -Wextra -Werror -std=c++98

OBJ =  $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

INC = -I inc

NAME = BSP

# x : 
# 	echo $(OBJ)
all : $(NAME)

$(NAME) : $(OBJ)
	# echo $@ $^
	c++ $(FLG) $^ -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(HDR)
	mkdir -p $(OBJ_DIR)
	c++ $(FLG) -c $(INC) $< -o $@

clean :
	rm -rf obj

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all fclean clean re

.SILENT : all $(NAME) clean fclean re $(OBJ) x
