# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 11:02:04 by aamhamdi          #+#    #+#              #
#    Updated: 2023/11/09 11:56:24 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CP = c++ -Wall -Wextra -Werror -std=c++98

I = Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

src = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

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
