/*
** EPITECH PROJECT, 2018
** my_putinputr
** File description:
** Print number on the screen
*/

#include <stdarg.h>
#include <limits.h>
#include "lib.h"

int my_put_int_var(int input)
{
    int quotient = 0;
    int leftover = 0;

    if (input < (INT_MIN + 1) || input > INT_MAX)
        return (84);
    if (input < 0) {
        my_putchar('-');
        input = input * (-1);
    }
    if (input > 0) {
        leftover = input % 10;
        quotient = input / 10;
    }
    if (quotient > 0)
        my_put_int_var(quotient);
    my_putnbr(leftover);
    return (0);
}

int recover_var_arg_int(va_list list)
{
    int input = va_arg(list, int);
    int error_code = 0;

    error_code = my_put_int_var(input);
    return (error_code);
}