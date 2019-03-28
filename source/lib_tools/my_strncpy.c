/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** Copy n characters from a source string toward another
*/

char    *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' || i == n){
        dest[i] = src[i];
        ++i;
    }
    return (dest);
}
