/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018 [BTTF]
** File description:
** header file for the pointer on function's structure
*/

#ifndef PTR_ON_FUNCTION_H_
#define PTR_ON_FUNCTION_H_

#include <stdarg.h>

struct ptr_on_function {
    char flag;
    void (*ptr)(va_list);
};
typedef struct ptr_on_function flag_for_printf_t;

#endif /* !PTR_ON_FUNCTION_H_ */
