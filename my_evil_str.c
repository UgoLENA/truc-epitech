/*
** EPITECH PROJECT, 2020
** my_evil_str.c
** File description:
** task04 Day04
*/

int my_strlen(char const *str)
{
    int count;
    
    count = 0;
    while (str[count] != '\0')
    {
        count = count + 1;
    }
    return (count);
}

char *my_evil_str(char *str)
{
    int count;
    int last_number;
    char tmp;
    
    count = 0;
    last_number = my_strlen(str) - 1;
    while (count < last_number)
    {
        tmp = str[count];
        str[count] = str[last_number];
        str[last_number] = tmp;
        count = count + 1;
        last_number = last_number - 1;
    }
    return(str);
}


