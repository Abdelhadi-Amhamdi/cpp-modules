# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 15:43:48 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/23 17:32:06 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

I = Account.hpp

CC = c++ -Wall -Wextra -Werror -std=c++98

src = Account.cpp tests.cpp

obj = $(src:.cpp=.o)

all : $(NAME)

%.o:%.cpp $(I)
	$(CC) -c $< -o $@

$(NAME): $(obj)
	g++ $(obj) -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all