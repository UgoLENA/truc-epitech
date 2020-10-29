/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

char *my_strcat(char *dest , char const *src) {
    char dest_length = my_strlen(dest);
    char i;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_length + i] = src[i];
    dest[dest_length + i] = '\0';
    return (dest);
}
