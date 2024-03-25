/*
** EPITECH PROJECT, 2022
** requirement
** File description:
** requirements
*/

#include "../include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int num_and_palindrome(char **num, args_t *args)
{
    switch (args->kind) {
        case K_NUM: {
            num_to_palindrome(args, num);
            break;
        }
        case K_PAL: {
            palindrome_get_nums(args);
            break;
        }
        default: break;
    }
    return 0;
}

args_t *args_cases(args_t *args, char **argv, int *i)
{
    switch (argv[*i][1]) {
        case 'n':
            if (n_case(args, argv, &*i) == NULL) return NULL;
            break;
        case 'p':
            if (p_case(args, argv, &*i) == NULL) return NULL;
            break;
        case 'b':
            if (b_case(args, argv, &*i) == NULL) return NULL;
            break;
        case 'i': {
            if (imaxmin_case(args, argv, &*i) == NULL) return NULL;
        }
        default: return NULL;
    }
    if (args->max == -1) args->max = 100;
    if (args->min == -1) args->min = 0;
    if (args->base == 0) args->base = 10;
    return args;
}

args_t *populate_conditions(args_t *args, char **argv, int *i)
{
    if (argv[*i][0] != '-') {
        free(args);
        return NULL;
    }
    if (argv[*i + 1] == NULL) {
        printf("invalid argument\n");
        exit (84);
    }
    if (strcmp(argv[*i + 1], "n") == 0
        && strcmp(argv[*i + 1], "p") == 0) {
        printf("invalid argument\n");
        exit (84);
    }
    return args;
}

args_t *populate_args(char **argv)
{
    args_t *args = malloc(sizeof *args);
    memset(args, 0, sizeof *args);
    args->max = -1;
    args->min = -1;
    for (int i = 1; argv[i]; i += 2) {
        populate_conditions(args, argv, &i);
        args_cases(args, argv, &i);
    }
    if (args->kind == K_NONE) return NULL;
    return args;
}
