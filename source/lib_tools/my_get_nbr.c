/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** Convert numeric string parts into integers
*/

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;
    long results = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        if (str[i] == '-')
            sign = -1;
        nb = nb * 10 + str[i] - 48;
        i++;
    }
    results = nb * sign;
    return (results);
}