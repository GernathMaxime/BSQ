##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	=	bsq

SRC	=	src/main.c		\
		src/my_atoi.c		\
		src/init_struct.c	\
		src/fill_map.c		\
		src/nb_colum.c		\
		src/nb_line.c		\
		src/creat_array.c	\
		src/bsq.c		\
		src/show_array.c	\

CC	=	gcc

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -W -Wextra -I include

all:	$(NAME)

 $(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm $(NAME)

re: clean all

.PHONY: all re clean fclean
