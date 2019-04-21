/*
** EPITECH PROJECT, 2019
** Personal lib // lib_linked_list
** File description:
** Linked list source header [This works only with library's struct.h file]
*/

#ifndef LINKED_LIST_H_
    #define LINKED_LIST_H_

    #include "struct.h"

    int push_to_tail(linked_node_t *head, int new_node_value);
    int push_to_head(linked_node_t **head, int new_node_value);
    int remove_head(linked_node_t **head);
    int remove_tail(linked_node_t *head);

#endif /* !LINKED_LIST_H_ */
