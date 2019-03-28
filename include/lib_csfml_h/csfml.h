/*
** EPITECH PROJECT, 2019
** Personal lib / CSFML Part
** File description:
** Header for CSFML tool functions
*/

#ifndef CSFML_H_
    #define CSFML_H_

    typedef struct mouse_hit_box {
        int x;
        int x_max;
        int y;
        int y_max;
    } hit_box_t;

    hit_box_t *init_hit_box_pos(int x, int x_max, int y, int y_max);

#endif /* !CSFML_H_ */
