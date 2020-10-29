/*
** EPITECH PROJECT, 2020
** rush01
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c , 1);
}

void draw(int x, char border, char space)
{
    int a = 0;

    while (a != x){
        if (a == 0 || a == x - 1)
            my_putchar(border);
         else
            my_putchar(space);
        a += 1;
    }
}

void display(int x, int y)
{
    int a = 0;

    while (a != y){
        if (a == 0 || a == y - 1)
            draw(x, 'o', '-');
         else 
            draw(x, '|', ' ');
            a += 1;
            my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if(x <= 0 || y <= 0)
        write(1, "Invalid size\n", 13);
    else if (x == 1 && y == 1){
        my_putchar('o');
        my_putchar('\n');
    } else
        display(x, y);
}

int main(void)
{
    rush(4, 4);
    return (0);
}
