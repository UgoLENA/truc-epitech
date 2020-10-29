/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** task02 Day04
*/

int my_putstr(char const *str)
{
    int count;

    count = 0;
    while (str[count] != '\0')
    {
        my_putchar(str[count]);
        count = count + 1;
    }
}
