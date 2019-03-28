/*
** EPITECH PROJECT, 2018
** my_strcpy
** File description:
** Copy a string toward another
*/

char *my_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0'){
        dest[i] = src[i];
        ++i;
    }
    return (dest);
}
