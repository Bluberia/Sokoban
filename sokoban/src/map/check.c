/*
** EPITECH PROJECT, 2017
** check
** File description:
** check
*/

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void check_open(int fd)
{
	if (fd == -1) {
		my_putstr("Fail for open file.\n");
		exit(84);
	}
}

void check_fopen(FILE* fp)
{
	if (fp == NULL) {
		my_putstr("Fail for open file.\n");
		exit(84);
	}
}

void check_map(char **map)
{
	int i = 0;
	int j = 0;

	while (map[i][j] != '\0') {
		if (map[i][j] == ' ' || map[i][j] == 'O' || map[i][j] == 'X' \
|| map[i][j] == 'P' || map[i][j] == '\n' || map[i][j] == '#')
			j++;
		else {
			my_putstr("Map invalid.\n");
			free(map);
			exit(84);
		}
		if (map[i][j] == '\n') {
			i++;
			j = 0;
		}
	}
}

int check_space(ssize_t *len_hei)
{
	ssize_t length = len_hei[0];
	ssize_t height = len_hei[1];

	if (length >= COLS || height >= LINES) {
		endwin();
		return (1);
	}
	return (0);
}
