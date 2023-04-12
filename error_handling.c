/*
** EPITECH PROJECT, 2023
** error handling
** File description:
** it hand the error
*/

#include "sandpile.h"

static int char_in_str(char const * const str, char const c)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c)
            return (0);
    }
    return (84);
}

static int verif_pattern(root_main *root, int i)
{
    for (int j = 0; root->map[i][j] != '\0'; j++) {
        if (char_in_str(root->pattern, root->map[i][j]) == 84)
            return (84);
    }
    return (0);
}

int error_handling(root_main *root)
{
    for (int i = 0; root->map[i] != NULL; i++) {
        if (verif_pattern(root, i) == 84)
            return (84);
    }
    return (0);
}
