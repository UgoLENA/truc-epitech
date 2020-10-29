/*
** EPITECH PROJECT, 2020
** my showstr
** File description:
** task20 Day06
*/

#include "my.h"

int my_showstr(char const *str)
{
    int i = 0;

    while (i != '\0')
        my_putchar(str[i]);
    return (0);
}
