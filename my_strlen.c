/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** duo stumper
*/

int my_strlen(const char *content)
{
    int i = 0;

    while (content[i] != '\0') {
        i++;
    }

    return (i);
}
