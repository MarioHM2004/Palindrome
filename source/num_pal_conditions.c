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

bool num_conditions(args_t *args, int *iterations, int *number)
{
    bool solution = true;
    if (args->base != 0 && args->base != 10) {
        *number = other_to_base_ten(*number, args->base);
    }
    if (args->max != -1 && (*iterations) > args->max) {
        printf("no solution\n"); solution = false;
    }
    if (solution == true)
        printf("%d leads to %d in %d iteration(s) in base %d\n",
            args->number, *number, *iterations, args->base);
    return solution;
}

bool palindrome_conditions(args_t *args,
    int *iterations, int *temporal, int *number)
{
    bool works = true;
    if (args->max != -1 && (*iterations) > args->max)
        works = false;
    else if (args->min != -1 && (*iterations) < args->min)
        works = false;
    else
        works = true;
    if (*temporal == args->palindrome && works == true){
        printf("%d leads to %d in %d iteration(s) in base %d\n",
        *number, args->palindrome, *iterations, args->base);
    }
    return works;
}
