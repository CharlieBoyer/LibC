/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018 [BTTF]
** File description:
** Manage the detection of flags and the array of pointers on functions too
*/

#include <stdlib.h>
#include "my_printf.h"
#include "lib.h"

const int FLAG_EXECUTED = 10;

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

flag_for_printf_t *init_array_fnc_ptr(void)
{
    flag_for_printf_t *array_fnc_ptr = malloc(sizeof(flag_for_printf_t) * 8);

    if (array_fnc_ptr == NULL)
        return (NULL);
    array_fnc_ptr[0].flag = 'i';
    array_fnc_ptr[0].ptr = &recover_var_arg_int;
    array_fnc_ptr[1].flag = 'd';
    array_fnc_ptr[1].ptr = &recover_var_arg_int;
    array_fnc_ptr[2].flag = 'l';
    array_fnc_ptr[2].ptr = &recover_var_arg_long;
    array_fnc_ptr[3].flag = 'c';
    array_fnc_ptr[3].ptr = &my_putchar_var;
    array_fnc_ptr[4].flag = 's';
    array_fnc_ptr[4].ptr = &my_putstr_var;
    array_fnc_ptr[5].flag = 'u';
    array_fnc_ptr[5].ptr = &recover_var_arg_uint;
    return (array_fnc_ptr);
}

flag_for_printf_t *create_array_fnc_ptr(void)
{
    flag_for_printf_t *flag_array = init_array_fnc_ptr();

    if (flag_array == NULL) {
        return (NULL);
    }
    flag_array[6].flag = 'o';
    flag_array[6].ptr = &recover_var_arg_octal;
    flag_array[7].flag = 'b';
    flag_array[7].ptr = &recover_var_arg_binary;
    return (flag_array);
}

int flag_execution(char *command, int command_index,
    flag_for_printf_t *flag_array, va_list list)
{
    int array_index = 0;
    int loop_counter = 0;
    int error_code = 84;

    while (loop_counter <= 8) {
        if (command[command_index + 1] == flag_array[array_index].flag) {
            error_code = flag_array[array_index].ptr(list);
            loop_counter = FLAG_EXECUTED;
        } else {
            ++loop_counter;
            ++array_index;
        }
    }
    return (error_code);
}