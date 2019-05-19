/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** Display a string (char array)
*/

#include <unistd.h>
#include "tools.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
