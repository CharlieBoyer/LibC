/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** Concatenate two string into one
*/

#include <stdlib.h>
#include "lib.h"

char *my_strcat(char *init, char *str_to_concat)
{
    char *result = malloc(sizeof(init) + sizeof(str_to_concat) + 1);
    int index = 0;
    int second_index = 0;

    while (init[index] != '\0') {
        result[index] = init[index];
        ++index;
    }
    while (str_to_concat[second_index] != '\0') {
        result[index + second_index] = str_to_concat[second_index];
        ++second_index;
    }
    result[index + second_index] = '\0';
    return (result);
}