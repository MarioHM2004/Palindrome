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

args_t *n_case(args_t *args,char **argv, int *i)
{
    if (args->kind != K_NONE){
        free(args);
        return NULL;
    }
    args->number = atoi(argv[*i + 1]);
    args->kind = K_NUM;
    return args;
}

args_t *p_case(args_t *args,char **argv, int *i)
{
    if (args->kind != K_NONE) {
        free(args);
        return NULL;
    }
    args->palindrome = atoi(argv[*i + 1]);
    args->kind = K_PAL;
    return args;
}

args_t *b_case(args_t *args,char **argv, int *i)
{
    int base = atoi(argv[*i + 1]);
        if (base < 1 || base > 10) {
            free(args);
            return NULL;
        }
    args->base = base;
    return args;
}

args_t *imaxmin_case(args_t *args, char **argv, int *i)
{
    if (strcmp(argv[*i], "-imin") == 0)
        args->min = atoi(argv[*i + 1]);
    if (strcmp(argv[*i], "-imax") == 0)
        args->max = atoi(argv[*i + 1]);
    return args;
}
