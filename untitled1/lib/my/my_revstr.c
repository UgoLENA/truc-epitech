/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** task03 Day06
*/

char *my_revstr(char *str)
{
    int count;
    int last_number;
    char tmp;

    count = 0;
    last_number = my_strlen(str) - 1;
    while (count < last_number) {
        tmp = str[count];
        str[count] = str[last_number];
        str[last_number] = tmp;
        count = count + 1;
        last_number = last_number - 1;
    }
    return(str);
}
