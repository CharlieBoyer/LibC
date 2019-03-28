/*
** EPITECH PROJECT, 2018
** my_isneg
** File description:
** Test numbers as argument and say if it is positive or negative
*/

#include "lib.h"

int my_nbr_isneg(int nb)
{
    if(nb < 0)
    {
        my_putchar('N');
    }
    else 
    {
        my_putchar('P');
    }
    my_putchar('\n');
    return (0);
}
