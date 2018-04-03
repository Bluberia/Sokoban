/*
** EPITECH PROJECT, 2017
** manage_keys
** File description:
** namages keys and deplacement of P
*/

#include <curses.h>
#include "proto.h"

void manage_right(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x][y + 1] == ' ') {
		map[x][y] = ' ';
		map[x][y + 1] = 'P';
		pos_p[1] += 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		if (save[1] == 'O')
			save[1] = ' ';
	} else if (map[x][y + 1] == 'O') {
		map[x][y] = ' ';
		map[x][y + 1] = 'P';
		pos_p[1] += 1;
		save[0] = 'O';
	} else
		manage_right_two(map, pos_p, save);
}

void manage_left(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x][y - 1] == ' ') {
		map[x][y] = ' ';
		map[x][y - 1] = 'P';
		pos_p[1] -= 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		if (save[1] == 'O')
			save[1] = ' ';
	} else if (map[x][y - 1] == 'O') {
		map[x][y] = ' ';
		map[x][y - 1] = 'P';
		pos_p[1] -= 1;
		save[0] = 'O';
	} else
		manage_left_two(map, pos_p, save);
}

void manage_up(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x - 1][y] == ' ') {
		map[x][y] = ' ';
		map[x - 1][y] = 'P';
		pos_p[0] -= 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		if (save[1] == 'O')
			save[1] = ' ';
	} else if (map[x - 1][y] == 'O') {
		map[x][y] = ' ';
		map[x - 1][y] = 'P';
		pos_p[0] -= 1;
		save[0] = 'O';
	} else
		manage_up_two(map, pos_p, save);
}

void manage_down(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x + 1][y] == ' ') {
		map[x][y] = ' ';
		map[x + 1][y] = 'P';
		pos_p[0] += 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		if (save[1] == 'O')
			save[1] = ' ';
	} else if (map[x + 1][y] == 'O') {
		map[x][y] = ' ';
		map[x + 1][y] = 'P';
		pos_p[0] += 1;
		save[0] = 'O';
	} else
		manage_down_two(map, pos_p, save);
}

void manage_keys(int key, char **map, int *pos_p, char *save)
{
	keypad(stdscr, TRUE);
	switch (key) {
	case KEY_RIGHT:
		manage_right(map, pos_p, save);
		break;
	case KEY_LEFT:
		manage_left(map, pos_p, save);
		break;
	case KEY_UP:
		manage_up(map, pos_p, save);
		break;
	case KEY_DOWN:
		manage_down(map, pos_p, save);
		break;
	}
}
