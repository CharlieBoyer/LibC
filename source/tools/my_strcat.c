/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** Concatenate two string into one
*/

#include <stdlib.h>
#include "tools.h"

char *my_strcat(char *init, char *str_to_concat)
{
    char *result = malloc(sizeof(init) + sizeof(str_to_concat) + 1);
    int index = 0;
    int second_index = 0;

    if (result == NULL) {
        return NULL;
    }
    
    if (str_to_concat == NULL) {
        return init;
    } else if (init == NULL && str_to_concat != NULL) { 
        return str_to_concat;
    } else {
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
}