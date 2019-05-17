/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2018
** File description:
** octal conversion (%o flag)
*/

#include <stdio.h>
#include <stdarg.h>
#include "lib.h"

void int_to_octal_conversion(unsigned int input)
{
    unsigned int quotient = 0;
    unsigned int leftover = 0;

    quotient = input / 8;
    leftover = input % 8;
    if (quotient > 0)
        int_to_octal_conversion(quotient);
    my_putnbr(leftover);
}

int recover_var_arg_octal(va_list list)
{
    unsigned int input = va_arg(list, unsigned int);

    int_to_octal_conversion(input);
    return (0);
}