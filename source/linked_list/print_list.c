/*
** EPITECH PROJECT, 2019
** Personal Lib
** File description:
** Example : how to print values for each node of a list ?
*/

#include <stdlib.h>
#include <stdio.h>
#include "struct.h"

int show_all_list_values(linked_node_t *head)
{
    linked_node_t *current = head;

    while (current->next != NULL) {
        printf("node_value : %d", current->value);
        current = current->next;
    }
    return (0);
}