##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	main.c\
		my_strlen.c\
		str_split.c\
		my_getnbr.c\
		linked.c\
		load_file_in_mem.c\
		init_struct.c\
		my_strcmp.c\
		get_height_tab.c\
		error_handling.c\
		put_center.c\
		solve.c\
		free.c\

OBJ	=	$(SRC:.c=.o)

CFLAGS =	-Wall -Wextra -O3

NAME	=	sandpile

all : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re :	fclean all

.PHONY: $(NAME), all, clean, fclean, re
