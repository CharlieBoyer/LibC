/*
** EPITECH PROJECT, 2018
** Personal library
** File description:
** Compare each characters 2 strings and return 1 if they match.
*/

#include "lib.h"

int check_differences(char *source, char *reference)
{
    int i = 0;

    while (source[i] != '\0') {
        if (source[i] != reference[i]) {
            return (1);
        } else {
            ++i;
        }
    }
    return (0);
}

int my_strcmp(char *source, char *reference)
{
    if (my_strlen(source) != my_strlen(reference)) {
        return (-1);
    } else {
        if (check_differences(source, reference) == 1) {
            return (-1);
        } else {
            return (0);
        }
    }
}