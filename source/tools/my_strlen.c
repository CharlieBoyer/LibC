/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** ...
*/

#include "tools.h"

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

    while (str[i] != '\n' || str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int my_strlen_word(char *str)
{
    int i = 0;

    while ((str[i] > ' ') && (str[i] < '~')) {
        i = i + 1;
    }
    return (i);
}