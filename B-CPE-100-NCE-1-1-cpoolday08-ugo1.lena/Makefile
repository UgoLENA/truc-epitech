##
## EPITECH PROJECT, 2020
## 
## File description:
## 
##

NAME	=	my_show_word_array

SRC	=	my_show_word_array.c 	\
		main.c			\

OBJ	=	$(SRC:.c=.o)

CFLAGS += -L./lib -lmy -I./include

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm $(OBJ)
	make -C lib/my clean

fclean:	clean
	rm $(NAME)
	make -C lib/my fclean

re: fclean all
	make -C lib/my re
