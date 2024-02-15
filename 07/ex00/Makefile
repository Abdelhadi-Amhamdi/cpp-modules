
NAME	= main

CPP		= c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRC		= main.cpp

INCLUDE = whatever.hpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCLUDE)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $@

clean :
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all 