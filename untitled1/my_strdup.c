/*
** EPITECH PROJECT, 2020
** my strdup
** File description:
** task01 Day08
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *dest;

    dest = malloc(sizeof(my_strlen(src)) + 1);
    my_strcpy(dest, src);
    return (dest);
}
