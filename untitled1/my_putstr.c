/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** task02 Day04
*/

char my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
