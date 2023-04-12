/*
** EPITECH PROJECT, 2023
** header
** File description:
** duo stumper
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>

#pragma once

typedef struct linked_node_s {
    void *data;
    struct linked_node_s *next;
}linked_node;

typedef struct {
    int i;
    int j;
    int k;
    char *tmp;
    char **res;
    int len_content;
    int nb_word;
} args_s;

typedef struct {
    char **map;
    int len_tab;
    int height_tab;
    int n;
    int argc;
    char const * const *argv;
    int start_x;
    int start_y;
    args_s *args;
    char const *pattern;
} root_main;

void translate_map_index(root_main *root);
void translate_index_map(root_main *root);
void put_center(root_main *root);
int error_handling(root_main *root);
int get_height_tab(char const * const *tab);
int my_strlen(const char *content);
int my_getnbr(const char *str);
char **str_split(const char *content, const char spliter);
linked_node *linked_new(void);
int init_root(root_main *root, char const *path, int n, char const *pattern);
void init_root_ar(root_main *root, int argc, char const * const *argv);
char *load_file_in_mem(char const *path);
void linked_add(linked_node *linked, void *data);
int linked_count(linked_node *linked);
int my_strcmp(const char *str, const char *str2);
void free_all(root_main *root);
