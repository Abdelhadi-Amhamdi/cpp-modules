# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 18:19:58 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/22 16:05:46 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

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