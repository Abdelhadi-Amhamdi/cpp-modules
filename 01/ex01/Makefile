# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 16:14:39 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/27 19:09:09 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MoarBrainz

I = Zombie.hpp

CP = c++ -Wall -Wextra -Werror -std=c++98

src = main.cpp Zombie.cpp ZombieHorde.cpp

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
