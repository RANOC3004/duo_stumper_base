/*
** EPITECH PROJECT, 2023
** linked
** File description:
** duo stumper
*/

#include "sandpile.h"

int linked_count(linked_node *linked)
{
    int res = 0;
    linked_node *linked_tmp = linked;

    while (linked_tmp != NULL && linked->data != NULL) {
        res++;
        linked_tmp = linked_tmp->next;
    }

    return (res);
}

linked_node *linked_new(void)
{
    linked_node *linked = malloc(sizeof(linked_node));
    if (linked == NULL) {
        return (NULL);
    }

    linked->data = NULL;
    linked->next = NULL;

    return (linked);
}

void linked_add(linked_node *linked, void *data)
{
    linked_node *tmp = linked;

    if (tmp->data == NULL) {
        tmp->data = data;
        return;
    }

    while (tmp->next != NULL && tmp->next->data != NULL) {
        tmp = tmp->next;
    }

    tmp->next = linked_new();
    tmp->next->data = data;
    tmp->next->next = NULL;
}
