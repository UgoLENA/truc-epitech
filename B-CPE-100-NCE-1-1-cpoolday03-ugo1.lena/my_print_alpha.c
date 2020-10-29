/*
** EPITECH PROJECT, 2020
** my_print_alpha
** File description:
** task01 Day03
*/
int my_print_alpha(void){
    int number = 96;
        do {
            number = number + 1;
            my_putchar(number);
        }
        while (number <= 121);
        return(0);
}
