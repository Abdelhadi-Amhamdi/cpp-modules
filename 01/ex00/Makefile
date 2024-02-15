# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 15:45:08 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/27 19:05:17 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CP = c++ -Wall -Wextra -Werror -std=c++98

I = Zombie.hpp

src = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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
