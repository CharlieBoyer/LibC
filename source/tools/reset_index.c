/*
** EPITECH PROJECT, 2018
** Personal Library (30/12/2018)
** File description:
** Set (or reset) a incoming int or a index to 0
*/

#include "tools.h"

int reset_index(int *index)
{
    if (*index == 0) {
        error_output("warning: index already set to 0\n");
    } else {
        *index = 0;
    }
    return (*index);
}