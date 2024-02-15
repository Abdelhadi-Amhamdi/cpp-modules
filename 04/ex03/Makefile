# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 14:23:46 by aamhamdi          #+#    #+#              #
#    Updated: 2023/11/11 15:49:09 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = main

build_dir = build/

CP = c++ -Wall -Wextra -Werror -std=c++98

I = AMateria.hpp Cure.hpp Ice.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

src = main.cpp AMateria.cpp Cure.cpp Ice.cpp MateriaSource.cpp Character.cpp

obj = $(src:.cpp=.o)
objs = $(addprefix $(build_dir), $(obj))


all : $(build_dir) $(NAME)

$(build_dir) :
	mkdir $(build_dir)

$(build_dir)%.o: %.cpp $(I)
	$(CP) $< -c -o $@

$(NAME): $(objs)
	$(CP) $(objs) -o $@

clean:
	rm -rf $(build_dir)

fclean: clean
	rm -rf $(NAME)

re : fclean all