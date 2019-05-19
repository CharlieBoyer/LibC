/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** Create a framebuffer
*/

#include <stdlib.h>
#include "framebuffer.h"
#include "tools.h"

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *framebuffer = malloc(sizeof(framebuffer_t));
    framebuffer->width = width;
    framebuffer->height = height;
    framebuffer->pixels = malloc(sizeof(char) * width * height * 4);
    if (framebuffer->pixels == NULL) {
        error_output("mem allocation failed\n");
        return (NULL);
    }
    return (framebuffer);
}

void framebuffer_destroy(framebuffer_t *framebuffer)
{
    free(framebuffer->pixels);
}

void my_put_pixel(framebuffer_t *framebuffer, unsigned int x,
    unsigned int y, sfColor color)
{
    framebuffer->pixels[(y * framebuffer->width + x) * 4] = color.r;
    framebuffer->pixels[(y * framebuffer->width + x) * 4 + 1] = color.g;
    framebuffer->pixels[(y * framebuffer->width + x) * 4 + 2] = color.b;
    framebuffer->pixels[(y * framebuffer->width + x) * 4 + 3] = color.a;
}
