/*
** EPITECH PROJECT, 2017
** manage_keys_two
** File description:
** namages keys and deplacement of P
*/

#include <curses.h>
#include "proto.h"

void manage_right_two(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x][y + 1] == 'X' && map[x][y + 2] == ' ') {
		map[x][y] = ' ';
		map[x][y + 1] = 'P';
		map[x][y + 2] = 'X';
		pos_p[1] += 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		if (save[1] == 'O') {
			save[0] = 'O';
			save[1] = ' ';

		}
	} else
		manage_right_three(map, pos_p, save);
}

void manage_left_two(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x][y - 1] == 'X' && map[x][y - 2] == ' ') {
		map[x][y] = ' ';
		map[x][y - 1] = 'P';
		map[x][y - 2] = 'X';
		pos_p[1] -= 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		if (save[1] == 'O') {
			save[0] = 'O';
			save[1] = ' ';

		}
	} else
		manage_left_three(map, pos_p, save);
}

void manage_up_two(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x - 1][y] == 'X' && map[x - 2][y] == ' ') {
		map[x][y] = ' ';
		map[x - 1][y] = 'P';
		map[x - 2][y] = 'X';
		pos_p[0] -= 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		if (save[1] == 'O') {
			save[0] = 'O';
			save[1] = ' ';

		}
	} else
		manage_up_three(map, pos_p, save);
}

void manage_down_two(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x + 1][y] == 'X' && map[x + 2][y] == ' ') {
		map[x][y] = ' ';
		map[x + 1][y] = 'P';
		map[x + 2][y] = 'X';
		pos_p[0] += 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		if (save[1] == 'O') {
			save[0] = 'O';
			save[1] = ' ';

		}
	} else
		manage_down_three(map, pos_p, save);
}
