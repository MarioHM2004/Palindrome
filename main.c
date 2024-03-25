/*
** EPITECH PROJECT, 2022
** requirement
** File description:
** requirements
*/

#include "include/my.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(int ac, char **av)
{
    args_t *args = NULL;
    if (!((args = populate_args(av)))) {
        fprintf(stderr, "invalid argument\n");
        return 84;
    }
    error_handling(args, ac, av);
    num_and_palindrome(av, args);
    free(args);
    return 0;
}
