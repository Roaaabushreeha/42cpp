CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = a.out
SRC= main.cpp Fixed.cpp
OBJ=$(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all 
.PHONY : all clean fclean re