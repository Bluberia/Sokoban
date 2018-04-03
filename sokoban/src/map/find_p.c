/*
** EPITECH PROJECT, 2017
** find_p
** File description:
** find position of p
*/

#include <stdlib.h>
#include "my.h"

int *find_p(char **map)
{
	int i = 0;
	int j = 0;
	int *position = malloc(sizeof(int) * 2);
	while (map[i][j] != 'P' && map[i][j] != '\0')
		if (map[i][j] == '\n') {
			i++;
			j = 0;
		} else
			j++;
	if (map[i][j] == '\0') {
		my_putstr("Error in your map.\nCan't find player.\n");
		free(map);
		exit(84);
	}
	position[0] = i;
	position[1] = j;
	return (position);
}
