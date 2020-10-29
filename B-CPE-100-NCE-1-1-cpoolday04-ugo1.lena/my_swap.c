/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** task01 Day04
*/

void my_swap(int *a, int *b)
{
    int tmp;
    
    tmp = a;
    a = b;
    b = tmp;
}
