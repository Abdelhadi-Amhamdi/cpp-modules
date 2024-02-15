# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/05 15:45:17 by aamhamdi          #+#    #+#              #
#    Updated: 2023/11/04 17:34:34 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CP = c++ -Wall -Wextra -Werror -std=c++98

I = Fixed.hpp

src = main.cpp Fixed.cpp

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