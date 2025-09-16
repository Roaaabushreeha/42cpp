
CXX=c++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98

NAME=Animal

SRC =Animal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp

OBJ = $(SRC:.cpp=.o)

all :$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean: 
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all 
.Phony: all clean fclean re 