/*
** EPITECH PROJECT, 2023
** load file in meme
** File description:
** load a file in a char *
*/

#include "sandpile.h"

char *load_file_in_mem(char const *path)
{
    struct stat sb;

    if (stat(path, &sb) == -1) {
        return NULL;
    }

    int fd = open(path, O_RDONLY);
    char *buff = malloc(sizeof(char) * (sb.st_size + 1));
    buff[sb.st_size] = '\0';

    if (fd == -1) {
        return NULL;
    }
    if (buff == NULL) {
        return NULL;
    }
    if (read(fd, buff, sb.st_size) == -1) {
        return NULL;
    }
    return (buff);
}
