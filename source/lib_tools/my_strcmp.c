/*
** EPITECH PROJECT, 2018
** Post Poll - Personal library
** File description:
** Little function which compare each character from a source with a dest string and return 1 in success 
*/

#include "lib.h"

int my_strcmp(char *source, char *model)
{
    int i = 0;
    int error_counter = 0;

    if (my_strlen(source) != my_strlen(model)) {
        return (0);
    } else {
        while (source[i] != '\0') {
            if (source[i] != model[i]) {
                ++i;
                ++error_counter;
            } else {
                ++i;
            }
        }
    }
    if (error_counter == 0) {
        return (1);
    } else {
        return (0);
    }
}
/*
int main(int argc, char **argv)
{
    char *source = argv[1];
    char *dest = argv[2];
    int result = my_strcmp(source, dest);

    my_putnbr(result);
    my_putchar('\n');
    return(0);
}
*/