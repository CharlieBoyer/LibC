/*
** EPITECH PROJECT, 2018
** Tools function
** File description:
** Error_handling function 
** >> Print a error message on the standard output
*/

#include <unistd.h>

void my_put_error(char c)
{
    write (2, &c, 1);
}

void error_output(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        my_put_error(str[i]);
        ++i;
    }
}