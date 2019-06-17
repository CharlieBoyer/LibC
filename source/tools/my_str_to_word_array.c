/*
** EPITECH PROJECT, 2019
** Personal Lib
** File description:
** Spit an incoming strung into an array of word
*/

#include <stdio.h>
#include <stdlib.h>

int is_alphanum_custom(char c)
{
    if ((c >= '0' && c <= '9')
    || (c >= 'A' && c <= 'Z')
    || (c >= 'a' && c <= 'z')
    || (c == '-') || c == '.' || c == '/') {
        return (1);
    } else {
        return (0);
    }
}

int my_strlen_word(char const *str)
{
    static int start_index = 0;
    int word_len = 0;

    while (is_alphanum_custom(str[start_index]) == 0) {
        start_index = start_index + 1;
    }
    while (is_alphanum_custom(str[start_index]) == 1) {
        word_len = word_len + 1;
        start_index = start_index + 1;
    }
    return (word_len);
}

int count_word(char const *str)
{
    int index = 0;
    int word_nb = 0;

    while (str[index] != '\0') {
        if (is_alphanum_custom(str[index]) == 1
        && is_alphanum_custom(str[index + 1]) == 0) {
            word_nb = word_nb + 1;
        }
        index = index + 1;
    }
    return (word_nb);
}

void skip_word_and_non_alphanum_char(char const *str, int *index, int *y)
{
    while (is_alphanum_custom(str[*index]) == 0) {
        if (str[*index] == '\0')
            break;
        *index = *index + 1;
    }
    *y = *y + 1;
}

char **my_str_to_word_array(char const *str)
{
    int str_i = 0;
    int x = 0;
    int y = 0;
    char **array = malloc(sizeof(char *) * (count_word(str) + 1));

    if (array == NULL)
        return (NULL);
    while (str[str_i] != '\0') {
        array[y] = malloc(sizeof(char) * (my_strlen_word(str) + 1));
        while (is_alphanum_custom(str[str_i]) == 1) {
            array[y][x] = str[str_i];
            str_i = str_i + 1;
            x = x + 1;
        }
        array[y][x] = '\0';
        x = 0;
        skip_word_and_non_alphanum_char(str, &str_i, &y);
    }
    array[y] = NULL;
    return (array);
}