/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** strcmp
*/

#include "sandpile.h"

int my_strcmp(const char *str, const char *str2)
{
    if (my_strlen(str) != my_strlen(str2)) {
        return 1;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != str2[i]) {
            return 1;
        }
    }
    return 0;
}
