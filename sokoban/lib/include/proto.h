/*
** EPITECH PROJECT, 2017
** proto
** File description:
** all proto of programs
*/

#include <stdio.h>
#include <stdlib.h>

#ifndef __PROTO_H_
#define __PROTO_H_

int manage_map(char *);
void len_and_hei(ssize_t *, ssize_t *, char *);
void manage_h(void);
void check_open(int);
void check_fopen(FILE*);
void fill_map(char *, char **, int, int);
int *find_p(char **);
void manage_keys(int, char **, int *, char *);
void check_map(char **);
int display_map(char **, int *, ssize_t *, char **);
void manage_right_two(char **, int *, char *);
void manage_left_two(char **, int *, char *);
void manage_up_two(char **, int *, char *);
void manage_down_two(char **, int *, char *);
void manage_right_three(char **, int *, char *);
void manage_left_three(char **, int *, char *);
void manage_up_three(char **, int *, char *);
void manage_down_three(char **, int *, char *);
int check_win(char **);
int check_loss(char **);
int check_space(ssize_t *);

#endif
