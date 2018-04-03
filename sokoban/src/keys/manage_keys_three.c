/*
** EPITECH PROJECT, 2017
** manage_keys_three
** File description:
** namages keys and deplacement of P
*/

#include <curses.h>

void manage_right_three(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x][y + 1] == 'X' && map[x][y + 2] == 'O') {
		map[x][y] = ' ';
		map[x][y + 1] = 'P';
		map[x][y + 2] = 'X';
		pos_p[1] += 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		save[1] = 'O';
	}
}

void manage_left_three(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x][y - 1] == 'X' && map[x][y - 2] == 'O') {
		map[x][y] = ' ';
		map[x][y - 1] = 'P';
		map[x][y - 2] = 'X';
		pos_p[1] -= 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		save[1] = 'O';
	}
}

void manage_up_three(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x - 1][y] == 'X' && map[x - 2][y] == 'O') {
		map[x][y] = ' ';
		map[x - 1][y] = 'P';
		map[x - 2][y] = 'X';
		pos_p[0] -= 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		save[1] = 'O';
	}
}

void manage_down_three(char **map, int *pos_p, char *save)
{
	int x = pos_p[0];
	int y = pos_p[1];

	if (map[x + 1][y] == 'X' && map[x + 2][y] == 'O') {
		map[x][y] = ' ';
		map[x + 1][y] = 'P';
		map[x + 2][y] = 'X';
		pos_p[0] += 1;
		if (save[0] == 'O') {
			map[x][y] = 'O';
			save[0] = ' ';
		}
		save[1] = 'O';
	}
}
