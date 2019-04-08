/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018 [BTTF]
** File description:
** Contain the %b flag function for my_printf
*/

#include <stdarg.h>
#include "lib.h"

void my_putnbr_binary_convert(int nb)
{
    int rest = 0;

    if (nb > 1) {
        rest = nb % 2;
        nb = nb / 2;
        my_putnbr_binary_convert(nb);
        my_putchar(rest + '0');
    } else {
        my_putchar(nb + '0');
    }
}

void binary_conversion(va_list list)
{
    int nb = va_arg(list, int);

    if (nb < 0) {
        error_output("error: function cannot convert a negative number");
    }
    my_putnbr_binary_convert(nb);
}
