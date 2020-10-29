/*
** EPITECH PROJECT, 2020
** my strdup
** File description:
** task01 Day08
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dest;
    int i;
    int toy;
    
    toy = my_strlen(src);
    i = 0;
    dest = malloc(toy) + 1;
    while (i < toy) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
