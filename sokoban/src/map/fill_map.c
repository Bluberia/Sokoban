/*
** EPITECH PROJECT, 2017
** fill map
** File description:
** fill map
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "proto.h"
#include "my.h"

void fill_map(char *filepath, char **map, int length, int height)
{
	int fd = 0;
	int i = 0;
	int j = 0;

	fd = open(filepath, O_RDONLY);
	check_open(fd);
	map[i] = malloc(sizeof(char) * (length * height));
	while (read(fd, map[i] + j, 1) == 1) {
		if (map[i][j] == '\n') {
			i++;
			map[i] = malloc(sizeof(char) * (length * height));
			j = 0;
		} else if (map[i][j] == '\0')
			break;
		else
			j++;
	}
	map[i][j] = '\0';
}
