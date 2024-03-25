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

char* base_ten_to_other(int num, int base)
{
    int count = 0;
    int temp = num;
    while (temp / base != 0) {
        count++;
        temp = temp / base;
    }
    char* result = malloc(sizeof(char)* (count + 2));
    result[0] = '\0';
    char reminder[32];

    while (num / base != 0) {
        sprintf(reminder, "%d", num % base);
        strcat(result, reminder);
        num = num / base;
    }
    sprintf(reminder, "%d", num % base);
    strcat(result, reminder);
    my_revstr(result);
    result[count + 1] = '\0';
    return result;
}

int other_to_base_ten(int num, int base)
{
    int result = 0;
    int power = 1;

    while (num != 0) {
        int digit = num % 10;
        result = result + digit * power;
        num = num / 10;
        power = power * base;
    }
    return result;
}
