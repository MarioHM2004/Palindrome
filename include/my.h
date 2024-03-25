/*
** EPITECH PROJECT, 2022
** my_h
** File description:
** functions prototypes
*/

#ifndef MY_H
    #define MY_H
    #include <stdbool.h>

typedef enum {
    K_NONE,
    K_NUM,
    K_PAL,
} kind_t;

typedef struct {
    int number;
    int palindrome;
    int base;
    int min;
    int max;
    kind_t kind;
} args_t;

int my_strlen(char const *str);
char *my_revstr ( char *str );
int my_nbrlen(long int num);
void my_putchar(char c);
int my_put_nbr (int nb);
bool is_palindrome(char *num);
void error_handling(args_t *args, int ac, char **av);
void help_errors(args_t *args, int ac, char **av);
int num_and_palindrome(char **num, args_t *args);
int num_to_palindrome(args_t *args, char **num);
int palindrome_get_nums(args_t *args);
args_t *populate_args(char **argv);
int num_and_palindrome(char **num, args_t *args);
char* base_ten_to_other(int num, int base);
int other_to_base_ten(int num, int base);
bool num_conditions(args_t *args, int *iterations, int *number);
bool palindrome_conditions(args_t *args,
    int *iterations, int *temporal, int *number);
args_t *args_cases(args_t *args, char **argv, int *i);
args_t *n_case(args_t *args,char **argv, int *i);
args_t *p_case(args_t *args,char **argv, int *i);
args_t *b_case(args_t *args,char **argv, int *i);
args_t *imaxmin_case(args_t *args, char **argv, int *i);

#endif
