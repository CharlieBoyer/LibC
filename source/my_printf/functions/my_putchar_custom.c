/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** Custom my_putchar compatible with a variadic list
*/

#include <stdarg.h>
#include <unistd.h>

void my_putchar_custom(va_list list)
{
    char c = (char)va_arg(list, int);
    write (1, &c, 1);
}

void print_percent(void)
{
    char c = '%';
    write(1, &c, 1);
}