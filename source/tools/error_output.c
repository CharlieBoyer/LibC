/*
** EPITECH PROJECT, 2018
** Tools function
** File description:
** Print a error message on the error output
*/

#include <unistd.h>
#include "lib.h"

void error_output(char *error_message)
{
    write (2, error_message, my_strlen(error_message));
}