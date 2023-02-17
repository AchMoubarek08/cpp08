CC = c++ -Wall -Wextra -Werror -std=c++98 -g -o mutantstack
SRC = main.cpp

NAME = mutantstack

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean	
	rm -f $(NAME) 

re : fclean all
		@rm -r *.dSYM