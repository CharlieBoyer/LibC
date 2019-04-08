/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018 [BTTF]
** File description:
** Manage the detection of flags and the array of pointers on functions too
*/

#include <stdlib.h>
#include "my_printf.h"
#include "lib.h"
#include "my_printf_fnc_ptr.h"

#define FLAG_EXECUTED 6

int flag_detector(char str_index)
{
    if (str_index == '%') {
        return (1);
    } else {
        return (0);
    }
}

void print_remaining(char *s, int s_nav)
{
    if (flag_detector(s[s_nav]) == 0) {
        my_putchar(s[s_nav]);
    }
}

flag_for_printf_t *create_array_fnc_ptr(void)
{
    flag_for_printf_t *array_fnc_ptr = malloc(sizeof(flag_for_printf_t) * 5);

    if (array_fnc_ptr == NULL)
        return (NULL);

    array_fnc_ptr[0].flag = 'i';
    array_fnc_ptr[0].ptr = &my_putnbr_custom;
    array_fnc_ptr[1].flag = 'd';
    array_fnc_ptr[1].ptr = &my_putnbr_custom;
    array_fnc_ptr[2].flag = 'l';
    array_fnc_ptr[2].ptr = &my_putnbr_custom;
    array_fnc_ptr[3].flag = 'c';
    array_fnc_ptr[3].ptr = &my_putchar_custom;
    array_fnc_ptr[4].flag = 's';
    array_fnc_ptr[4].ptr = &my_putstr_custom;

    return (array_fnc_ptr);
}

void flag_execution(char *command, int command_index,
    flag_for_printf_t *flag_array, va_list list)
{
    int array_index = 0;
    int loop_counter = 0;

    while (loop_counter <= 5) {
        if (command[command_index + 1] == flag_array[array_index].flag) {
            flag_array[array_index].ptr(list);
            loop_counter = FLAG_EXECUTED;
        } else {
            ++loop_counter;
            ++array_index;
        }
    }
    reset_index(&array_index);
}