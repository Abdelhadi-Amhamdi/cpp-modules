
CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = main

SRC = main.cpp A.cpp B.cpp C.cpp

OBJS = $(SRC:.cpp=.o)

all: $(NAME)

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all
