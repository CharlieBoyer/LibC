/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2018
** File description:
** Print variadic unsigned int
*/

#include "my_printf_fnc_ptr.h"
#include "tools.h"

int my_put_unsigned_int_var(unsigned int input)
{
    unsigned int leftover = 0;
    unsigned int quotient = 0;

    if (input >= 4294967295)
        return (84);
    if (input > 0) {
        quotient = input / 10;
        leftover = input % 10;
    }
    if (quotient > 0)
        my_put_unsigned_int_var(quotient);
    my_putnbr(leftover);
    return (0);
}

int recover_var_arg_uint(va_list list)
{
    unsigned int input = va_arg(list, unsigned int);
    int error_code;

    error_code = my_put_unsigned_int_var(input);
    return (error_code);
}