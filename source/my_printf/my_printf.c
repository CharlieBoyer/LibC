/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** Reproduction of the printf libC function according C99
*/

#include <unistd.h>
#include <stdlib.h>
#include "my_printf.h"
#include "lib.h"

void end_routine(va_list list, flag_for_printf_t *flag_array)
{
    va_end(list);
    free(flag_array);
}

int check_empty_command(char *command)
{
    if (command[0] == '\0') {
        error_output("Warning: empty command for my_printf call\n");
        return (84);
    } else {
        return (0);
    }
}

int my_printf(char *command, ...)
{
    va_list list;
    int index = 0;
    int error_code = check_empty_command(command);
    flag_for_printf_t *flag_array = create_array_fnc_ptr();

    va_start(list, command);
    if (error_code == 84)
        return (error_code);
    while (command[index] != '\0') {
        if (flag_detector(command[index]) == 1 && command[index + 1] == '%')
            print_percent();
        else if (flag_detector(command[index]) == 1) {
            error_code = flag_execution(command, index, flag_array, list);
            ++index;
        } else
            print_remaining(command, index);
        ++index;
    }
    end_routine(list, flag_array);
    return (error_code);
}