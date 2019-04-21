/*
** EPITECH PROJECT, 2019
** Personal Lib
** File description:
** Functions for adding new elements in a list
*/

#include <stdlib.h>
#include "struct.h"

int push_to_tail(linked_node_t *head, int new_node_value)
{
    linked_node_t *current = head;

    /* Find the tail of the list*/
    while (current->next != NULL) {
        current = current->next;
    }

    /* Add new node */
    current->next = malloc(sizeof(linked_node_t));
    if (current->next == NULL) {
        return (-1);
    }
    
    current->next->value = new_node_value;
    current->next->next = NULL;
    return (0);
}

int push_to_head(linked_node_t **head, int new_node_value)
{
    /* Create new node */
    linked_node_t * new_node;
    new_node = malloc(sizeof(linked_node_t));

    if (new_node == NULL) {
        return (-1);
    }

    new_node->value = new_node_value; // Assign new node value
    new_node->next = *head;
    // head become *next of new_node, it is the second node
    *head = new_node;
    // Remove current head and replace it by our new node
    return (0); // Succesfull Push
}