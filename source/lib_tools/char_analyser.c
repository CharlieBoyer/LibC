/*
** EPITECH PROJECT, 2018
** Personal lib: char detector
** File description:
** Return 1 or 0 if the incoming char is a printable char
*/

#include <stdlib.h>
#include "lib.h"
#include "char_analyser_mode.h"

const int SIGMODE = 10;

int mini_helper(int c)
{
    my_putstr(
        "\nNote: Mini-helper char_analyser\n"
        "1: Return 1 only on alphanumerical characters\n"
        "2: Consider -\"\\/:~_& as a valid char in addition\n"
        "3: Check if the character is in ASCII Standard (0 >> 127)\n\n"
    );
    return (c);
}

analyser_exec_t *init_mode_array(void)
{
    analyser_exec_t *mode = malloc(sizeof(analyser_exec_t) * 4);

    mode[0].mode = ALPHA;
    mode[0].ptr = &is_alpha;
    mode[1].mode = ALPHA_PLUS;
    mode[1].ptr = &is_alphanum_plus;
    mode[2].mode = ASCII;
    mode[2].ptr = &check_ascii;
    mode[3].mode = MODE;
    mode[3].ptr = &mini_helper;

    return (mode);
}

int char_analyser(char c, analyser_mode_t mode)
{
    analyser_exec_t *analyser = init_mode_array();
    int index = 0;
    int result;

    while (index < 4) {
        if (mode == analyser[index].mode) {
            result = analyser[index].ptr(c);
            index = SIGMODE;
            return (result);
        }
        ++index;
    }
    return (-1);
}