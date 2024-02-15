# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 11:23:14 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/21 11:25:09 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

src = megaphone.cpp

CC = c++ -Wall -Wextra -Werror -std=c++98

obj = $(src:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(CC) -c $< -o $@

$(NAME): $(obj)
	$(CC) $(obj) -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re: fclean all