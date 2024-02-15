# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 16:37:21 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/27 19:17:15 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

I = Harl.hpp

CP = c++ -Wall -Wextra -Werror -std=c++98

src = main.cpp Harl.cpp

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

re: fclean all
