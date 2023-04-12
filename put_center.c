/*
** EPITECH PROJECT, 2023
** put_center
** File description:
** beautif descri
*/

#include "sandpile.h"

static int is_pair(int nb)
{
    if (nb % 2 == 0)
        return 0;
    return 1;
}

void put_center(root_main *root)
{
    if (is_pair(root->height_tab) == 1 && is_pair(root->len_tab) == 1) {
        root->start_x = (root->len_tab + 1) / 2 - 1;
        root->start_y = (root->height_tab + 1) / 2 - 1;
        return;
    }
    if (is_pair(root->height_tab) == 1 && is_pair(root->len_tab) == 0) {
        root->start_x = (root->len_tab) / 2 - 1;
        root->start_y = (root->height_tab + 1) / 2 - 1;
        return;
    }
    root->start_x = (root->len_tab + 1) / 2 - 1;
    root->start_y = (root->height_tab) / 2 - 1;
}
