# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamhamdi <aamhamdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 20:51:16 by aamhamdi          #+#    #+#              #
#    Updated: 2023/11/16 15:43:41 by aamhamdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

I = AForm.hpp Bureaucrat.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

SRC = main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ = $(SRC:.cpp=.o)

CP = c++ -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o: %.cpp $(I)
	$(CP) -c $< -o $@

$(NAME) : $(OBJ)
	$(CP) $(OBJ) -o $@

clean :
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re : fclean all