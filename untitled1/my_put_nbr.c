/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** taskO7 Day03
*/

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_put_nbr(int nb)
{
    int number;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb > 9) {
        number = (nb % 10);
        nb = (nb / 10);
        my_put_nbr(nb);
        my_putchar(number + '0');
    } else {
        my_putchar(nb + '0');
    }
}
