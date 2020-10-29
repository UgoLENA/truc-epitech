/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** task03 Day04
*/

int my_strlen(char const *str) {
    int count;
    
    count = 0;
    while (str[count] != '\0') {
        count = count + 1;
    }
    return (count);
}
