# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 18:23:03 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/23 17:43:09 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl_filter

CP = c++ -Wall -Wextra -Werror -std=c++98

I = Harl.hpp

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

re : fclean all
