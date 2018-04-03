/*
** EPITECH PROJECT, 2017
** len_and_hei
** File description:
** len_and_hei
*/

#include <stdio.h>
#include <stdlib.h>
#include "proto.h"

void len_and_hei(ssize_t *length, ssize_t *height, char *filepath)
{
	FILE* fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t tmp = 0;

	fp = fopen(filepath, "r");
	check_fopen(fp);
	tmp = getline(&line, &len, fp);
	while (tmp != -1) {
		if (*length < tmp)
			*length = tmp;
		tmp = getline(&line, &len, fp);
		*height += 1;
	}
	free(line);
}
