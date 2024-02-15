# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 17:34:53 by aamhamdi          #+#    #+#              #
#    Updated: 2023/11/13 18:10:48 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

I = Bureaucrat.hpp Form.hpp

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRC:.cpp=.o)

CP = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o: %.cpp $(I)
	$(CP) -c $< -o $@

$(NAME) : $(OBJ)
	$(CP) $(OBJ) -o $@

clean :
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re : fclean all
