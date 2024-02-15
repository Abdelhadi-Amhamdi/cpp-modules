# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 13:56:12 by aamhamdi          #+#    #+#              #
#    Updated: 2023/11/06 12:36:05 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CP = c++ -Wall -Wextra -Werror -std=c++98

I = ClapTrap.hpp ScavTrap.hpp

src = main.cpp ClapTrap.cpp ScavTrap.cpp

obj = $(src:.cpp=.o)

all : $(NAME)

%.o: %.cpp $(I)
	$(CP) $< -c -o $@

$(NAME): $(obj)
	$(CP) $(obj) -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re : fclean all