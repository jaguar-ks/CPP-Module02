# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 04:57:58 by faksouss          #+#    #+#              #
#    Updated: 2023/07/20 05:01:02 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Fixed.cpp main.cpp

OBJDIR = obj

OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

HEADERS = Fixed.hpp

NAME = fixed

FLG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLG) $(OBJ) -I. -o $(NAME)

$(OBJDIR)/%.o: src/%.cpp $(HEADERS)
	@mkdir -p $(OBJDIR)
	c++ $(FLG) -c -I. $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJ) all $(NAME) clean fclean re
