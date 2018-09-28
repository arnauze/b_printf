SRC = libft/*.c b_printf.c
NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
OBJECTS = *.o
BINAIRE = a.out

all: $(NAME)

$(NAME): libftprintf.h
	gcc $(FLAGS) -c $(SRC) -I libftprintf.h
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(BINAIRE)
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
