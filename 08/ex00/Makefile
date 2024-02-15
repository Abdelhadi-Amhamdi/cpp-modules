
NAME = main

CPP = c++

SRCS = main.cpp 

OBJS = $(SRCS:.cpp=.o)

INCLUDES = easyfind.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all 