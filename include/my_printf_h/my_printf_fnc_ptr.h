/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** header file for the pointer on function's structure
*/

#ifndef MY_PRINTF_FNC_PTR_H_
    #define MY_PRINTF_FNC_PTR_H_

    #include <stdarg.h>

    typedef struct ptr_on_function {
        char flag;
        int (*ptr)(va_list);
    } flag_for_printf_t;

#endif /* !MY_PRINTF_FNC_PTR */
