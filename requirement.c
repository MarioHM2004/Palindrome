/*
** EPITECH PROJECT, 2022
** requirement
** File description:
** requirements
*/

#include <stdio.h>
int my_factrec_synthesis(int nb)
{
    int temp = nb;
    if (nb < 0)
        return 0;
    if (temp == 1)
        nb = nb;
    if (temp == 0)
        nb = 1;
    if (temp > 12)
        return 0;
    if (temp > 1 && !(temp > 12)) {
        for (int i = 1; i < temp; i++){
            nb = nb * (temp - i);
        }
    }
    return nb;
}

int my_squareroot_synthesis(int nb )
{
    int value = 0;
    if (nb < 0)
        return -1;
    while (value * value <= nb) {
        value++;
    }
    value--;

    if (value * value == nb) {
        return value;
    } else {
        return -1;
    }
}
