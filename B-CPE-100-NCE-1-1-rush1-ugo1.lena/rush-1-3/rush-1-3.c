/*
** EPITECH PROJECT, 2020
** 
** File description:
** 
*/

#include <stdio.h>

void line(int x, char borderl, char space, char borderr)
{
    int a = 0;
    while(a != x){
        if(a == 0)
            my_putchar(borderl);
        else if (a == x -1)
            my_putchar(borderr);
        else
            my_putchar(space);
        a += 1;
    }
}


void rush(int x, int y)
{
    int a = 0;
    while(a != y){
        if(a == 0)
            line(x,'A','B','A');
        else if(a == y - 1)
            line(x,'C','B','C');
        else
            line(x,'B', ' ','B');
        a += 1;
        my_putchar('\n');
    }
}

void display(int x, int y)
{
    int a =0;
    if (x == 1 && y == 1){
        my_putchar('B');
        my_putchar('\n');
    }
    else if (x == 1 && y != 1){
        while(a != y){
            my_putchar('B');
            my_putchar('\n');
            a += 1; 
        }
    }else{
        while (a != x){
            my_putchar('B');
            a += 1;
        }
        my_putchar('\n');
    }
}
