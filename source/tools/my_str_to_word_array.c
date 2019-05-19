/*
** EPITECH PROJECT, 2019
** Personal Lib
** File description:
** Spit an incoming strung into an array of word
*/

#include <stdio.h>
#include <stdlib.h>
#include "tools.h"
#include "my_printf.h"
#include "char_analyser_mode.h"

int count_word(const char *str)
{
    int i = 0;
    int word = 0;

    while (str[i] != '\0') {
        if (char_analyser(str[i], ALPHA_PLUS) == 1
            && char_analyser(str[i + 1], ALPHA_PLUS) != 1) {
            ++word;
        }
        ++i;
    }
    return (word);
}

char **set_array(const char *str)
{
    int y = 0;
    int i = 0;
    int word = count_word(str);
    char **array = malloc(sizeof(char *) * (word + 1));

    if (array == NULL) {
        return (NULL);
    }
    while (y < word) {
        array[y] = malloc(sizeof(char) * (my_strlen_word(str) + 1));
        if (array[y] == NULL) {
            return (NULL);
        }
        ++y;
    }
    return (array);
}

char **my_str_to_word_array(const char *str)
{
    int word_i = 0;
    int str_i = 0;
    int array_i = 0;
    char **array = set_array(str);

    if (array == NULL) {
        return (NULL);
    }
    while (str[str_i] != '\0') {
        if (str[str_i] == ' ' || str[str_i] == '\t') {
            array[word_i][array_i] = '\0';
            word_i = word_i + 1;
            str_i = str_i + 1;
            reset_index(&array_i);
        } else {
            array[word_i][array_i] = str[str_i];
            str_i = str_i + 1;
            array_i = array_i + 1;
        }
    }
    array[word_i][array_i] = '\0';
    return (array);
}