/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** function that reverses a string
*/

#include "../include/my.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *my_revstr ( char *str )
{
    int length = my_strlen(str);
    char temp = 0;
    int index = 0;
    while (index < length / 2){
        temp = str[index];
        str[index] = str[length - index -1];
        str[length - index -1] = temp;
        index = index + 1;
    }
    return (str);
}
