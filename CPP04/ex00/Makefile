
CC=c++
FLAGS=-Wall -Werror -Wextra -std=c++98

NAME=Animal

SRC =Animal.cpp Dog.cpp Cat.cpp main.cpp WrongCat.cpp WrongAnimal.cpp

OBJ = $(SRC:.cpp=.o)

all :$(NAME)

$(NAME):$(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@
clean: 
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all 
.Phony: all clean fclean re 