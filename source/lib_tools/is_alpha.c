/*
** EPITECH PROJECT, 2019
** Personal lib: is_alpha
** File description:
** A 3 mode function : check alphanum, symbols, ASCII valid char
*/

#include "char_analyser_mode.h"

int is_alpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return (1);
    } else {
        return (0);
    }
}

int is_alphanum_plus(int c)
{
    int symbols[13] = {34, 35, 38, 39, 42, 45, 46, 47, 58, 64, 92, 95, 126};
    int i = 0;

    if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        || (c >= '0' && c <= '9')) {
        return (1);
    }
    while (i < 13) {
        if (c == symbols[i]) {
            return (1);
        }
        ++i;
    }
    return (0);
}

int check_ascii(int c)
{
    if (c >= 0 && c <= 127) {
        return (1);
    } else if (c < 0) {
        return (0);
    } else {
        return (0);
    }
}