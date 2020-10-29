/*
** EPITECH PROJECT, 2020
** my_print_revalpha
** File description:
** task02 Day03
*/
int my_print_revalpha(void){
    int number = 123;
    do {
        number = number - 1;
        my_putchar(number);
    }
    while (number >= 98);
    return(0);
}
