/*
** EPITECH PROJECT, 2020
** rush-1-2
** File description:
** rush 1-2 
*/

#include <unistd.h>
 
void my_putchar(char c)
{
    write(1, &c, 1);
}

void rush(int x, int y)
{
    int a = 0;
    while(y > a) {
        a = a + 1;
        if(x == 2 && y == 2) {
            my_putchar("/\\\n");
            my_putchar("\\/");
            a = y;
        } else {
            treatment(x, y, a);
        }
    }
}

void treatment(int x, int y, int a)
{
    if(x == 1 || y == 1){
        my_displayer(1, x, 0, ' ', ' ');
    } else if (a == 1) {
        my_displayer(2, x, 0, '/', '\\');
    } else if (a == y) {
        my_displayer(2, x, 0, '\\', '/');
    } else {
        my_displayer(1, x, x - 2, ' ', ' ');
    }
    my_putchar('\n');
}

void my_displayer(int sgn, int nb, int space, char char_one, char char_two)
{
    int a = 0;
    int aa = 0;
    if (sgn == 2) {
        my_putchar(char_one);
        nb -= 2;
    }
    for(a; a < nb; a++) {
        my_putchar('*');
        if (space > 0) {
            while (aa < space){
                aa = aa + 1;
                my_putchar(' ');
            }
            my_putchar('*');
            a = nb;
        }
    }
    if (sgn == 2) {
        my_putchar(char_two);
    }
}    

int main()
{
    rush(4, 4);
    return(0);
}
