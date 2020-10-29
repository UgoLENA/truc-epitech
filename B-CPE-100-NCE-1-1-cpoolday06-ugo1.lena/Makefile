##
## EPITECH PROJECT, 2020
## 
## File description:
## 
##

NAME	=	showstr

SRC	=	my_showstr.c 	\
		main.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS += -L./lib/my -lmy -I./include

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
