/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** Display a string (char array)
*/

#include "lib.h"

void my_putstr(char const *str)
{
    int i;
    
    i = 0;
    while(str[i] != '\0')
    {
        my_putchar(str[i]);
        ++i;
    }
}
