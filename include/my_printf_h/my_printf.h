/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** main header for the whole project
*/

#ifndef SOURCE_HEADER_H_
#define SOURCE_HEADER_H_

#include <stdarg.h>
#include "my_printf_fnc_ptr.h"

int my_printf(char *command, ...);
void print_remaining(char *command, int index);
void print_percent(void);
void my_putchar_custom(va_list list);
void my_putstr_custom(va_list list);
void my_putnbr_custom(va_list list);
//void binary_conversion(va_list list);

flag_for_printf_t *create_array_fnc_ptr(void);
int flag_detector(char command_index);
int reset_index(int *index);
void flag_execution(char *command, int command_index,
    flag_for_printf_t *flag_array, va_list list);

#endif /* !SOURCE_HEADER_H_ */