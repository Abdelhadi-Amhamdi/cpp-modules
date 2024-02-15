# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 11:34:02 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/23 17:31:38 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

I = Contact.hpp PhoneBook.hpp

CC = c++ -Wall -Wextra -Werror -std=c++98

src = main.cpp Contact.cpp PhoneBook.cpp

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
