CC=c++
FLAGS=-Wall -Werror -Wextra -std=c++98

NAME= ScavTrap

SRC =ClapTrap.cpp main.cpp ScavTrap.cpp	

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