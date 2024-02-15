# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/28 16:58:31 by aamhamdi          #+#    #+#              #
#    Updated: 2024/01/12 18:24:46 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

I = PmergeMe.hpp

CP = c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRC = main.cpp PmergeMe.cpp

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