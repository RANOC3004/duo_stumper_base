/*
** EPITECH PROJECT, 2023
** free
** File description:
** free
*/

#include "sandpile.h"

void free_all(root_main *root)
{
    int i = 0;

    while (root->map[i] != NULL) {
        free(root->map[i]);
        i++;
    }
    free(root->map);
    free(root);
}
