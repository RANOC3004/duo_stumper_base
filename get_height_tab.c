/*
** EPITECH PROJECT, 2023
** get neighboords
** File description:
** get the number of neihboords
*/

#include "sandpile.h"

int get_height_tab(char const * const *tab)
{
    int i = 0;

    while (tab[i] != NULL)
        i++;
    return (i);
}
