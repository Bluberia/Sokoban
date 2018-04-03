/*
** EPITECH PROJECT, 2017
** manage_map
** File description:
** manage map
*/

#include <ncurses.h>
#include "proto.h"

void manage_win(void)
{
	int end = 0;

	while (end == 0) {
		clear();
		curs_set(0);
		printw("You win.\nPress any key to exit.\n");
		end = getch();
		refresh();
	}
}

void manage_loss(void)
{
	int end = 0;

	while (end == 0) {
		clear();
		curs_set(0);
		printw("You loss.\nPress any key to exit.\n");
		end = getch();
		refresh();
	}
}

int check_res(char **map, int result)
{
	if (result == 1) {
		manage_win();
		endwin();
	} else if (result == 2) {
		manage_loss();
		endwin();
		free(map);
		return (1);
	}
	return (0);
}

int manage_map(char *filepath)
{
	ssize_t length = 0;
	ssize_t height = 0;
	ssize_t *len_hei = malloc(sizeof(ssize_t) * 2);
	char **map;
	int *pos_p = 0;
	char **map_save;
	int result = 0;

	len_and_hei(&length, &height, filepath);
	len_hei[0] = length;
	len_hei[1] = height;
	map = malloc(sizeof(char *) * (length * height));
	map_save = malloc(sizeof(char *) * (length *height));
	fill_map(filepath, map, length, height);
	fill_map(filepath, map_save, length, height);
	check_map(map);
	pos_p = find_p(map);
	result = display_map(map, pos_p, len_hei, map_save);
	if (check_res(map, result == 1))
	    return (1);;
	free(map);
	return (0);
}
