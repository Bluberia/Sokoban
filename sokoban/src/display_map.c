/*
** EPITECH PROJECT, 2017
** display_map
** File description:
** display map
*/

#include <ncurses.h>
#include "proto.h"
#include "my.h"

void fill_save(char *save)
{
	char save_one = 0;
	char save_two = 0;

	save[0] = save_one;
	save[1] = save_two;
}

void print_map(int height, char **map)
{
	int i = 0;

	while (i <= height) {
		printw("%s", map[i]);
		i++;
	}
}

void manage_restart(char **map, char **map_save, int *pos_p, int *save_pos_p)
{
	for (int i = 0; map[i]; i++) {
		free(map[i]);
		map[i] = my_strdup(map_save[i]);
	}
	pos_p[0] = save_pos_p[0];
	pos_p[1] = save_pos_p[1];
}

void start(char *save)
{
	fill_save(save);
	initscr();
	curs_set(0);
	keypad(stdscr, TRUE);
}

int display_map(char **map, int *pos_p, ssize_t *len_hei, char **map_save)
{
	char *save = malloc(sizeof(char) * 2);
	int *save_pos_p = malloc(sizeof(int) * 2);
	int key = 0;

	save_pos_p = find_p(map);
	start(save);
	while (key != 27) {
		clear();
		if (check_space(len_hei) == 1)
			return (0);
		print_map(len_hei[1], map);
		if (check_win(map) == 1)
			return (1);
		if (check_loss(map) == 1)
			return (2);
		key = getch();
		if (key == 32)
			manage_restart(map, map_save, pos_p, save_pos_p);
		manage_keys(key, map, pos_p, save);
		refresh();
	}
	endwin();
	return (0);
}
