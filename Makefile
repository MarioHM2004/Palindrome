##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## compiles your libmy
##

SRC  =          ./

OBJ  =          $(SRC.c=.o)

NAME =          palindrome

FLAGS = 		-Wall -g3

CFILES =		source/*.c main.c

all:    $(NAME)

$(NAME):	$(OBJ)
	gcc $(FLAGS) -o $(NAME) $(CFILES)

fclean:
	rm -f $(NAME)

re : fclean all
