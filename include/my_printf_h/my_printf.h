/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** main header for the whole project
*/

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

    #include <stdarg.h>
    #include "my_printf_fnc_ptr.h"

    extern const int FLAG_EXECUTED;

    int my_printf(char *command, ...);
    void print_remaining(char *command, int index);
    void print_percent(void);
    int my_putchar_var(va_list list);
    int my_putstr_var(va_list list);
    int recover_var_arg_octal(va_list list);
    int recover_var_arg_binary(va_list list);
    int recover_var_arg_int(va_list list);
    int recover_var_arg_long(va_list list);
    int recover_var_arg_uint(va_list list);

    flag_for_printf_t *create_array_fnc_ptr(void);
    int flag_detector(char command_index);
    int reset_index(int *index);
    int flag_execution(char *command, int command_index,
        flag_for_printf_t *flag_array, va_list list);

#endif /* !MY_PRINTF_H */