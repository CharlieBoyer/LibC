/*
** EPITECH PROJECT, 2019
** Personal Lib
** File description:
** Remove (Pop) node from the list
*/

#include <stdlib.h>
#include "struct.h"

int remove_head(linked_node_t **head)
{
    linked_node_t *next_node = NULL;

    if (*head == NULL) {
        return (-1);
    }

    next_node = (*head)->next; // Store the next_node after [head]
    free(*head); // Free the node [head]
    *head = next_node; // the new head of the list is the previous "second" node

    return (0);
}

int remove_tail(linked_node_t *head)
{
    /* if there is only one item in the list, remove it */
    if (head->next == NULL) {
        free(head);
        return (0);
    }

    /* Go to the second to last node in the list */
    linked_node_t *current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Now (*current) points to the second to last item of the list
    free(current->next);
    current->next = NULL; // The actual next node must be NULL
    return (0);
}