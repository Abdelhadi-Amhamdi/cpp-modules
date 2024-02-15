# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 16:31:41 by aamhamdi          #+#    #+#              #
#    Updated: 2023/11/04 17:39:36 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp

CP = c++ -Wall -Wextra -Werror -std=c++98

I = Fixed.hpp Point.hpp

src = main.cpp Fixed.cpp Point.cpp bsp.cpp

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