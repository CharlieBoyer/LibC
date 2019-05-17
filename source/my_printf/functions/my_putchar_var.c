/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** Custom my_putchar compatible with a variadic list
*/

#include <stdarg.h>
#include <unistd.h>

int my_putchar_var(va_list list)
{
    char c = (char)va_arg(list, int);

    write (1, &c, 1);
    return (0);
}

int print_percent(void)
{
    char c = '%';

    write(1, &c, 1);
    return (0);
}