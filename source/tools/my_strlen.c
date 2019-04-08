/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** ...
*/

#include "lib.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int my_strlen_line(char *str)
{
    int i = 0;

    while (str[i] != '\n')
    {
        i++;
    }
    return (i);
}

int my_strlen_word(char *str)
{
    int i = 0;

    while (str[i] != ' ')
    {
        i++;
    }
    return (i);
}
