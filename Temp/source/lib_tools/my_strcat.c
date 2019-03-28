/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** Concatenate two string into one
*/

//----------------------------NOT UPDATED----------------------------//

#include <stdlib.h>
#include "lib.h"

char *my_strcat(char *init, char *str_to_concat)
{
    char *result = malloc(sizeof(init) + sizeof(str_to_concat) + 1);
    int index = 0;
    int second_index = 0;

    while (init[index] != '\0') {
        result[index] = init[index];
        ++index;
    }
    while (str_to_concat[second_index] != '\0') {
        result[index + second_index] = str_to_concat[second_index];
        ++second_index;
    }
    result[index + second_index] = '\0';
    return (result);
}

// char *my_strcat(char **init, char *str_to_concat)
// {
//     int str_to_concat_len = my_strlen(str_to_concat);
//     int init_len = my_strlen(*init);
//     int index = 0;

//     // if (*init != malloc(sizeof(char) * (init_len + str_to_concat_len + 1))) {
//     //     error_output("ERROR: init not enough big for concatenate\n");
//     //     return (NULL);
//     // }
//     while (index < str_to_concat_len) {
//         *init[init_len + index] = str_to_concat[index];
//         ++index;
//     }
//     *init[init_len + index] = '\0';
//     return (*init);
// }

/*
int main(void)
{
    char *init = "hello";

    my_strcat(&init, " world");
    my_putstr(init);
    my_putchar('\n');
    return (0);
}
*/