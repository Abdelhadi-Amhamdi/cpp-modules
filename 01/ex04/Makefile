# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 16:33:47 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/25 12:39:22 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = seed

CP = c++ -Wall -Wextra -Werror -std=c++98

src = main.cpp

obj = $(src:.cpp=.o)

all : $(NAME)

%.o: %.cpp
	$(CP) $< -c -o $@

$(NAME): $(obj)
	$(CP) $(obj) -o $@

clean:
	rm -rf $(obj)

fclean: clean
	rm -rf $(NAME)

re : fclean all