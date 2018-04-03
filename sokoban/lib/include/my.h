/*
** EPITECH PROJECT, 2017
** lib_my
** File description:
** lib my
*/

#ifndef __MY__H_
#define __MY__H_

int my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
int my_put_nbr2(int nb, int module, int number, int result);
int my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_in_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int reader_str(char *str, char const *to_find, int i, int *a);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s3, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int check_if_ltr_or_nbr(char *str, int i);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_shownem(char const *src, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_strdup(char const *src);
int my_putnbr_base(int, char *);
int my_putstr_nonprint(char const *);
int my_printf(char *str, ...);

#endif
