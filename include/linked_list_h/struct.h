/*
** EPITECH PROJECT, 2019
** Personal Lib
** File description:
** Linked list -> basic structure example
*/

#ifndef BASE_STRUCT_H_
    #define BASE_STRUCT_H_

    typedef struct linked_node {
        int value;
        struct linked_node *next;
    } linked_node_t;

#endif /* !BASE_STRUCT_H_ */
