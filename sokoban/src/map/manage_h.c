/*
** EPITECH PROJECT, 2017
** manage_h
** File description:
** manage h and display man of my_sokoban
*/

#include "my.h"

void manage_h(void)
{
	my_putstr("USAGE\n\t./my_sokoban map\n\nDESCRIPTION\n\tmap file \
representing the warehouse map, containing ‘#’ for walls, \n\t\t‘P’ \
for the player, ‘X’ for boxes and ‘O’ for storage locations.\n\n \
GAMEPLAY\n\tYou can move with the arrow keys.\n\tTo restart the game, \
you will need to press the space key.\n");
}
