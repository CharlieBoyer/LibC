/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** Contains all "tools" fonctions prototypes
*/

#ifndef LIB_H
    #define LIB_H

    #include "char_analyser_mode.h"

    int char_analyser(char letter, analyser_mode_t mode);
    void my_swap(int *a, int *b);
    void my_putchar(char c);
    void my_putnbr(int nb);
    void my_putstr(char *str);
    int my_strlen(char *str);
    int my_strlen_line(char *str);
    int my_strlen_word(char *str);
    int my_getnbr(char const *str);
    char *my_revstr(char *str);
    char **my_str_to_word_array();
    char *my_strcat(char *init, char *to_concat);
    char *my_strncat(char *dest, char const *src, int nb);
    int my_strcmp(char *source, char *model);
    int my_strncmp(char *compared, char *reference, int index, int n);
    char *my_strcpy(char *dest, char *src);
    char *my_strncpy(char *dest, char const *src, int n);
    void error_output(char *str);
    int reset_index(int *index);

#endif /* !LIB_H_ */
