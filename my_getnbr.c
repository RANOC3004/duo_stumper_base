/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** return a int that correspond to a number in a string
*/

#include "sandpile.h"

int my_getnbr(const char *str)
{
    int result = 0;
    int neg = 1;

    if (str[0] < 48 || str[0] > 57)
        return (-1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-') {
            neg = -1;
            continue;
        }
        result = result * 10;
        result += str[i] - 48;
    }
    return (result * neg);
}
