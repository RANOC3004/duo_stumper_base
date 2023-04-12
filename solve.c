/*
** EPITECH PROJECT, 2023
** solve
** File description:
** it solves
*/

#include "sandpile.h"

static char get_index(char const *str, char c)
{
    int index = 0;

    for (; str[index] != '\0'; index++) {
        if (str[index] == c)
            return index + 48;
    }
    return 0;
}

void translate_map_index(root_main *root)
{
    for (int i = 0; root->map[i] != NULL; i++) {
        for (int j = 0; root->map[i][j] != '\0'; j++) {
            root->map[i][j] = get_index(root->pattern, root->map[i][j]);
        }
    }
}

static int char_to_int(const char c)
{
    return c - 48;
}

void translate_index_map(root_main *root)
{
    for (int i = 0; root->map[i] != NULL; i++) {
        for (int j = 0; root->map[i][j] != '\0'; j++) {
            root->map[i][j] = root->pattern[char_to_int(root->map[i][j])];
        }
    }
}
