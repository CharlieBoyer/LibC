/*
** EPITECH PROJECT, 2018
** my_putnbr
** File description:
** Print number on the screen
*/

#include <stdarg.h>
#include "lib.h"

void my_putnbr_custom(va_list list)
{
    int nb = va_arg(list, int);
    int rest = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 9) {
        rest = nb % 10;
        nb = nb / 10;
        my_putnbr(nb);
        my_putchar(rest + '0');
    } else {
        my_putchar(nb + '0');
    }
}