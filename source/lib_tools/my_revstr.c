/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** reverse string 
*/

//---------------------------NOT UPDATED--------------------------//

char *my_revstr(char *str)
{
    int counter = 0;
    int count = 0;
    int decount;
    int temp;

    while (str[counter] != '\0') {
        counter = counter + 1;
    }
    decount = counter - 1;
    while (count < decount) {
        temp = str[count];
        str[count] = str[decount];
        str[decount] = temp;
        count = count + 1;
        decount = decount - 1;
    }
    return (str);
}