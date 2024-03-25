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

bool is_palindrome(char *num)
{
    int num_len = strlen(num);
    char *rev_num = my_revstr(strdup(num));

    for (int i = 0; i < num_len; i++){
            if (rev_num[i] != num[i])
                return false;
    }
    free(rev_num);
    return true;
}

int num_to_palindrome(args_t *args, char **num)
{
    int iterations = 1;
    char *buff;
    if (args->base != 0 && args->base != 10) {
        buff = base_ten_to_other(args->number, args->base);
    } else {
        buff = strdup(num[2]);
    }
    int number = atoi(buff);
    while (is_palindrome(buff) == false
        || (iterations) <= args->min){
        int rev_num = atoi(my_revstr(buff));
        number = number + rev_num;
        iterations++;
        snprintf(buff, *buff, "%d", number);
    }
    iterations--;
    num_conditions(args, &iterations, &number);
    return number;
}

int palindrome_loop(args_t *args, int number, int temporal, char *temp)
{
    int iterations = 1;
    while (number <= args->palindrome){
        while (temporal <= args->palindrome){
            palindrome_conditions(args, &iterations, &temporal, &number);
            int rev_num = atoi(my_revstr(temp));
            temporal = temporal + rev_num;
            iterations++;
            snprintf(temp, *temp, "%d", temporal);
        }
        number++;
        sprintf(temp, "%d", number);
        temporal = number;
        iterations = 0;
    }
    return iterations;
}

int palindrome_get_nums(args_t *args)
{
    char *num = strdup("1");
    char buff[10];
    char temp[10];
    strcpy(buff, num);
    strcpy(temp, num);
    int number = atoi(buff);
    int temporal = atoi(temp);
    palindrome_loop(args, number, temporal, temp);
    free(num);
    return number;
}
