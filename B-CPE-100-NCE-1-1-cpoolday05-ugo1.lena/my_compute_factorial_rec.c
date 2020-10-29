/*
** EPITECH PROJECT, 2020
** task02 Day05
** File description:
** my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb) {

    if (nb < 0 || nb >= 13)
        return (0);
    if (nb == 0) 
        return (1);
    return(nb * my_compute_factorial_rec(nb - 1));
}
