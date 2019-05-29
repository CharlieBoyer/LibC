/*
** EPITECH PROJECT, 2019
** Personal Lib
** File description:
** Spit an incoming strung into an array of word
*/

#include <stdio.h>
#include <stdlib.h>
#include "tools.h"
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

char **set_array(char *str)
{
    int y = 0;
    int word = count_word(str);
    char **array = malloc(sizeof(char *) * (word + 1));

    if (array == NULL)
        return (NULL);
    while (y < word) {
        array[y] = malloc(sizeof(char) * (my_strlen(str) + 1));
        if (array[y] == NULL)
            return (NULL);
        ++y;
    }
    array[word] = NULL;
    return (array);
}

void skip_between_words(char *str, int *index, char delimiter)
{
    while (str[*index] == delimiter || str[*index] == '\t' ||
    str[*index] == ' ' || str[*index] == '\n' || str[*index] == '\0')
        ++*index;
}

char **my_str_to_word_array(char *str, char delimiter)
{
    int word_i = 0;
    int str_i = 0;
    int array_i = 0;
    char **array = NULL;

    if (str == NULL || (array = set_array(str)) == NULL)
        return NULL;
    while (str[str_i] != '\0') {
        if (str[str_i] == delimiter || str[str_i] == '\t' || str[str_i] == ' '
        || str[str_i] == '\n' || str[str_i] == '\0') {
            skip_between_words(str, &str_i, delimiter);
            array[word_i++][array_i] = '\0';
            reset_index(&array_i);
        } else
            array[word_i][array_i++] = str[str_i++];
    }
    array[word_i][array_i] = '\0';
    return (array);
}