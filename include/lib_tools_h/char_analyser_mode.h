/*
** EPITECH PROJECT, 2019
** Personal Lib: char_analyser function
** File description:
** Function pointer array for various char_analyser modes
*/

#ifndef CHAR_ANALYSER_MODE_H_
    #define CHAR_ANALYSER_MODE_H_

    extern const int SIGMODE;

    typedef enum mode_e {
        ALPHA,
        ALPHA_PLUS,
        ASCII,
        MODE
    } analyser_mode_t;

    typedef struct mode {
        analyser_mode_t mode;
        int(*ptr)(int);
    } analyser_exec_t;

    int is_alpha(int c);
    int is_alphanum_plus(int c);
    int check_ascii(int c);

#endif /* !CHAR_ANALYSER_MODE_H_ */
