# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 19:50:00 by aamhamdi          #+#    #+#              #
#    Updated: 2023/12/27 19:50:02 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CP = c++ -Wall -Wextra -Werror -std=c++98

SRC = main.cpp BitcoinExchange.cpp

I = BitcoinExchange.hpp

OBJ = $(SRC:.cpp=.o)
OBJS = $(addprefix $(obj_dir),$(OBJ))

obj_dir=build/

$(obj_dir)%.o:%.cpp $(I)
	$(CP) -c $< -o $@

all: $(obj_dir) $(NAME)

$(obj_dir):
	mkdir $(obj_dir)

$(NAME) : $(OBJS)
	$(CP) $(OBJS) -o $@

clean:
	rm -rf $(obj_dir)

fclean : clean
	rm -f $(NAME)

re : fclean all