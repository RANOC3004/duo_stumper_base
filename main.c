/*
** EPITECH PROJECT, 2023
** head
** File description:
** duo stumper
*/

#include "sandpile.h"

static void display(char **map)
{
    int j = 0;
    char **pam = map;
    char *tmp = "";

    while (pam[j] != NULL) {
        if (my_strcmp(tmp, pam[j]))
            printf("%s\n", pam[j]);
        if (!my_strcmp(pam[j], "\n"))
            tmp = pam[j];
        j++;
    }
}

static void modif_tab(char **tab, root_main *root, int i, int j)
{
    tab[i][j] += 1;
    if (tab[i][j] >= '4') {
        tab[i][j] = '0';
        if (i - 1 >= 0)
            modif_tab(tab, root, i - 1, j);
        if (j + 1 <= root->len_tab - 1)
            modif_tab(tab, root, i, j + 1);
        if (i + 1 <= root->height_tab - 1)
            modif_tab(tab, root, i + 1, j);
        if (j - 1 >= 0)
            modif_tab(tab, root, i, j - 1);
        return;
    }
    return;
}

static void sandpile(root_main *root)
{
    translate_map_index(root);
    for (int y = 0; y != root->n; y++)
        modif_tab(root->map, root, root->start_y, root->start_x);
    translate_index_map(root);
    display(root->map);
}

int main(int argc, char **argv)
{
    root_main *root = malloc(sizeof(root_main));
    int a;

    if (argc != 4)
        return (84);
    if (my_getnbr(argv[3]) == -1) {
        return (84);
    }
    if (root == NULL)
        return (84);
    a = init_root(root, argv[1], my_getnbr(argv[3]), argv[2]);
    if (a == 84)
        return (84);
    init_root_ar(root, argc, (char const * const *) argv);
    if (error_handling(root) == 84)
        return (84);
    put_center(root);
    sandpile(root);
    free_all(root);
    return (0);
}
