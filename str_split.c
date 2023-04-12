/*
** EPITECH PROJECT, 2023
** str_split
** File description:
** duo stumper
*/

#include "sandpile.h"

char *get_alloc_str(int str_len)
{
    char *str = malloc(sizeof(char) * str_len);
    if (str == NULL) {
        return (NULL);
    }
    return (str);
}

char **str_split_next(const char *str, char delimiter, char **res)
{
    int adv_word = 0;
    int adv_res = 0;
    char *word = get_alloc_str(my_strlen(str));
    if (word == NULL) return (NULL);
    for (int i = 0; i <= my_strlen(str); i++) {
        if (word == NULL) return (NULL);
        if ((str[i] == delimiter || i == my_strlen(str)) && adv_word) {
            word[adv_word] = '\0';
            res[adv_res] = word;
            adv_res++;
            adv_word = 0;
            word = get_alloc_str(my_strlen(str));
            continue;
        }
        if (str[i] == delimiter) continue;
        word[adv_word] = str[i];
        adv_word++;
    }
    free(word);
    return (res);
}

char **str_split(const char *str, char delimiter)
{
    int len = my_strlen(str);
    int word_count = 0;
    int first = 1;
    char prev = str[0];
    if (str[0] != delimiter) word_count++;
    for (int i = 1; i < len; i++) {
        if (str[i] == delimiter && prev != delimiter && !first) {
            word_count++;
        }
        if (str[i] == delimiter && prev != delimiter && first) {
            first = 0;
        }
        prev = str[i];
    }
    char **res = malloc(sizeof(char *) * (word_count + 1));
    if (res == NULL) {
        return (NULL);
    }
    res[word_count] = NULL;
    return (str_split_next(str, delimiter, res));
}
