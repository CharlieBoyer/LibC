/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018 [BTTF]
** File description:
** Contain the %b flag function for my_printf
*/

#include <stdio.h>
#include <stdarg.h>
#include "lib.h"

void int_to_binary_conversion(unsigned int input)
{
    unsigned int quotient = 0;
    unsigned int leftover = 0;

    quotient = input / 2;
    leftover = input % 2;
    if (quotient > 0)
        int_to_binary_conversion(quotient);
    my_putnbr(leftover);
}

int recover_var_arg_binary(va_list list)
{
    unsigned int input = va_arg(list, unsigned int);

    int_to_binary_conversion(input);
    return (0);
}