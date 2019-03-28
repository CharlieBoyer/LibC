/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** init mouse & event-related struct
*/

#include <stdlib.h>
#include "csfml.h"
#include "lib.h"

hit_box_t *init_hit_box_pos(int x, int x_max, int y, int y_max)
{
    hit_box_t *hit_box = malloc(sizeof(hit_box_t));

    if (hit_box == NULL) {
        return (NULL);
    }
    hit_box->x = x;
    hit_box->x_max = x_max;
    hit_box->y = y;
    hit_box->y_max = y_max;
    if (x_max <= x || y_max <= y) {
        error_output("Warning: wrong hitbox, do not use reverted hitbox\n"
            "Returning NULL value\n");
        return (NULL);
    } else {
        return (hit_box);
    }
}