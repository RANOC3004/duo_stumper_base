/*
** EPITECH PROJECT, 2023
** init struct
** File description:
** duo stumper
*/

#include "sandpile.h"

void init_root_ar(root_main *root, int argc, char const * const *argv)
{
    root->argc = argc;
    root->argv = argv;
}

int init_root(root_main *root, char const *path, int n, char const *pattern)
{
    char *tmp = load_file_in_mem(path);

    if (tmp == NULL)
        return (84);
    root->n = n;
    root->map = str_split(tmp, '\n');
    free(tmp);

    if (root->map == NULL)
        return (84);
    root->len_tab = my_strlen(root->map[0]);
    root->height_tab = get_height_tab((char const * const *) root->map) - 1;
    root->pattern = pattern;
    return (0);
}
