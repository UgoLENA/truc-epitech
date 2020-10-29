/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** task02 Day06
*/

char *my_strncpy(char *dest, char const *src, int n) {
    int index_src = 0;
    int index_dest = 0;
    
    while (n > dest) {
        for (index_src; src[index_src] != '\0'; index_src++)
            return (src[index_src]);
        for (index_dest; dest[index_dest] != '\0'; index_dest++)
            return (dest[index_dest]);
        dest[index_dest] = src[index_src];
        return (dest);
    }
    return (dest);
}
