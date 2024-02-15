# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 19:51:31 by aamhamdi          #+#    #+#              #
#    Updated: 2023/12/27 19:55:00 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

I = RPN.hpp

CP = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp RPN.cpp

OBJ = $(SRC:.cpp=.o)

OBJS = $(addprefix $(build_dir), $(OBJ))

build_dir = build/

all: $(build_dir) $(NAME)

$(build_dir) :
	mkdir $(build_dir)

$(build_dir)%.o: %.cpp $(I)
	$(CP) -c $< -o $@

$(NAME) : $(OBJS)
	$(CP) $(OBJS) -o $@

clean:
	rm -rf $(build_dir)

fclean : clean
	rm -f $(NAME)

re : fclean all