/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** display a string
*/

#include <stdarg.h>
#include "lib.h"

int my_putstr_var(va_list list)
{
    int i = 0;
    char *str = va_arg(list, char *);

    while (str[i] != '\0') {
        my_putchar(str[i]);
        ++i;
    }
    return (0);
}