/*
** EPITECH PROJECT, 2020
** my strcpy
** File description:
** task01 Day07
*/

char *my_strcpy(char *dest, char const *src) {
    int index_src = 0;
    int index_dest = 0;

    for (index_src; src[index_src] != '\0'; index_src++)
        return (src[index_src]);
    for (index_dest; dest[index_dest] != '\0'; index_dest++)
        return (dest[index_dest]);
    dest[index_dest] = src[index_src];
}
