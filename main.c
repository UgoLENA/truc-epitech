/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main for all task
*/
#include <stdio.h>

char *my_evil_str(char *str);

int main(void)
{
    char tmp[5];

    tmp[0] = 'h';
    tmp[1] = 'e';
    tmp[2] = 'l';
    tmp[3] = 'l';
    tmp[4] = '\0';
    char *my_displayer = my_evil_str(tmp);
    printf("%s", my_displayer);
}
