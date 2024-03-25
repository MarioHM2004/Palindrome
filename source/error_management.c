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

void help_errors(args_t *args, int ac, char **av)
{
    int len = my_nbrlen(args->palindrome);
    char *buff = malloc(sizeof(char)* (len + 1));
    sprintf(buff, "%d", args->palindrome);

    if (args->min < -1 || args->max < -1){
        printf("invalid argument\n");
        exit (84);
    }
    if (args->min > args->max){
        printf("invalid argument\n");
        exit (84);
    }
    if (args->number < 0 || args->palindrome < 0){
        printf("invalid argument\n");
        exit (84);
    }
    if (is_palindrome(buff) == false){
        printf("invalid argument\n");
        exit (84);
    }
    free(buff);
}

void error_handling(args_t *args, int ac, char **av)
{
    if (ac % 2 == 0){
        printf("invalid argument\n");
        exit (84);
    }
    if (ac > 9){
        printf("invalid argument\n");
        exit (84);
    }
    if (ac < 3){
        printf("invalid argument\n");
        exit (84);
    }
    help_errors(args, ac, av);
}
