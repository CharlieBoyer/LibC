/*
** EPITECH PROJECT, 2019
** Personal Library
** File description:
** string comparator from 'index' until 'n' characters
*/

#include "lib.h"

int my_strncmp(char *compared, char *reference, int index, int n)
{
    int i = index;
    int reference_len = my_strlen(reference);
    int compared_len = my_strlen(compared);

    if (n == 0 || n < 0 || i < 0)
        return (-1);
    if ((i + n) > reference_len || (i + n) > compared_len)
        return (-1);
    if (i > reference_len || i > compared_len)
        return (-1);

    while (i < (i + n)) {
        if (compared[i] == reference[i]) {
            i = i + 1;
        } else {
            return (0);
        }
    }
    return (1);
}