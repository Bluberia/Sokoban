##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Compile our projects
##

NAME	=	my_sokoban

SRC_DIR	=	./src/

MAP_DIR =	./src/map/

KEY_DIR	=	./src/keys/

SRC	=	$(SRC_DIR)main.c		\
		$(SRC_DIR)manage_map.c		\
		$(SRC_DIR)display_map.c		\
		$(MAP_DIR)manage_h.c		\
		$(MAP_DIR)len_and_hei.c		\
		$(MAP_DIR)check.c		\
		$(MAP_DIR)check_end.c		\
		$(MAP_DIR)fill_map.c		\
		$(MAP_DIR)find_p.c		\
		$(KEY_DIR)manage_keys.c		\
		$(KEY_DIR)manage_keys_two.c	\
		$(KEY_DIR)manage_keys_three.c

CFLAGS	=	-W -Wall -Wextra -I ./lib/include -I ./lib/include/printf

OBJ	=	$(SRC:%.c=%.o)

LIB	=	-L ./lib/my -lmy -lncurses

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
		$(MAKE) -C ./lib/my/
		$(CC) -o $(NAME) $(OBJ) $(LIB)
		@echo "COMPILATION COMPLETE"

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		$(MAKE) clean -C ./lib/my
		@echo "CLEAR COMPLETED"

re:		fclean all

debug:		CFLAGS += -g
debug:		re
