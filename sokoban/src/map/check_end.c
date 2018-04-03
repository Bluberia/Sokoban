/*
** EPITECH PROJECT, 2017
** check end
** File description:
** check end
*/

int check_win(char **map)
{
	int i = 0;
	int j = 0;

	while (map[i][j] != '\0') {
		if (map[i][j] == 'O')
			return (0);
		if (map[i][j] == '\n') {
			i++;
			j = 0;
		} else
			j++;
	}
	return (1);
}

int check_x(char up, char right, char down, char left)
{
	if (up == '#' && (right == '#' || left == '#'))
		return (1);
	if (down == '#' && (right == '#' || left == '#'))
		return (1);
	return (0);
}

int check_loss(char **map)
{
	int i = 0;
	int j = 0;

	while (map[i][j] != '\0') {
		if (map[i][j] == 'X') {
			if (check_x(map[i - 1][j], map[i][j + 1], \
map[i + 1][j], map[i][j - 1]) == 1)
			return (1);
		}
		if (map[i][j] == '\n') {
			i++;
			j = 0;
		} else
			j++;
	}
	return (0);
}
