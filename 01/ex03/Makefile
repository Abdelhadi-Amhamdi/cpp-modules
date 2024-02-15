# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 18:22:15 by aamhamdi          #+#    #+#              #
#    Updated: 2023/10/23 17:46:36 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

I = HumanA.hpp HumanB.hpp Weapon.hpp

CP = c++ -Wall -Wextra -Werror -std=c++98

src = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

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