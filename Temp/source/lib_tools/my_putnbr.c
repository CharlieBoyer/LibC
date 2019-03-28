/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** 
*/

#include "lib.h"

void my_putnbr(int nb)
{
    int reste = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 9) {
        reste = nb % 10;
        nb = nb / 10;
        my_putnbr(nb);
        my_putchar(reste + '0');
    } else {
        my_putchar(nb + '0');
    }
}