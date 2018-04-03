/*
** EPITECH PROJECT, 2017
** main
** File description:
** main for my_sokoban
*/

#include <stdlib.h>
#include "my.h"
#include "proto.h"

int main(int ac, char **av)
{
	if (ac != 2) {
		my_putstr("Number of arguments incorrect.\nMake '-h' \
to see the use.\n");
		return (84);
	}
	if (my_strcmp(av[1], "-h") == 0)
		manage_h();
	else
		if (manage_map(av[1]) == 1)
			return (1);;
	return (0);
}
