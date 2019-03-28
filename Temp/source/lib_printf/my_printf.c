/*
** EPITECH PROJECT, 2018
** PSU_my_printf_bootsap_2018
** File description:
** display a list of arguments (from an ellipsis)
*/

/*---------------UPDATE LIST---------------//
    >> correct the binary conversion function
    >> Add %b flag and increase flag counter loop
//-----------------------------------------*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "my_printf_fnc_ptr.h"
#include "my_printf.h"
#include "lib.h"

int my_printf(char *command, ...)
{
    va_list list;
    int index = 0;
    flag_for_printf_t *flag_array = create_array_fnc_ptr();

    va_start(list, command);
    if (command[0] == '\0') {
        error_output("Warning: empty string detect");
        return (84);
    }
    while (command[index] != '\0') {
        if (flag_detector(command[index]) == 1 && command[index + 1] == '%') {
            print_percent();
        } else if (flag_detector(command[index]) == 1) {
            flag_execution(command, index, flag_array, list);
            ++index;
        } else {
            print_remaining(command, index);
        }
        ++index;
    }
    va_end(list);
    return (0);
}