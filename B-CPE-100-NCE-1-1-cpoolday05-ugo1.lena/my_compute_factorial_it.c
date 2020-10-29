/*
** EPITECH PROJECT, 2020
** my_compute_factorial_it
** File description:
** task01 Day05
*/

int my_compute_factorial_it(int nb)
{
    int result = nb;
    int simp = 1;
    
    if (nb < 0 || nb >= 13) {
        return (0);
    }
    if (nb == 0) { 
        return (1);
    }
    if (nb >= 1 && nb <= 12) {
        while (simp != nb) {
            result = result * (nb - simp);
            simp++;
        }
    }
    return (result);
}
