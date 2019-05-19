/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2018
** File description:
** Compute and write the value of a long number on the output (flag %ld)
*/

#include "my_printf_fnc_ptr.h"
#include "tools.h"

int my_putlong_var(long int input)
{
    long int quotient = 0;
    long int leftover = 0;

    if (input < -9223372036854775807 || input > 9223372036854775807)
        return (84);
    if (input < 0) {
        my_putchar('-');
        input = input * (-1);
    }
    if (input > 0) {
        quotient = input / 10;
        leftover = input % 10;
    }
    if (quotient > 0)
        my_putlong_var(quotient);
    my_putnbr(leftover);
    return (0);
}

int recover_var_arg_long(va_list list)
{
    long int input = va_arg(list, long int);
    int error_code;

    error_code = my_putlong_var(input);
    return (error_code);
}