/*
** EPITECH PROJECT, 2020
** my_print_digits
** File description:
** task03 Day03
*/
int my_print_digits(void){
    char number = 47;
    do {
        number = number + 1;
        my_putchar(number);
    }
    while (number <= 56);
    return (0);
}
