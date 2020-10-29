/*
** EPITECH PROJECT, 2020
** my_print_comb
** File description:
** task05 Day03
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

char x = '0';
char y;
char z;

int main(void)
{
    while (x <= 7)
    {
      x = x + 1;
        while(y <= 8)
        {
            y = y + 1;
            while(z <= 9)
            {
               z = z + 1;
                displayer();
            }
           y++;
        }
       x++;
    }
}

void displayer(int x, int y, int z)
{
    if (x == '7' && y == '8' && z == '9')
    {
        my_putchar(x);
        my_putchar(y);
        my_putchar(z);
    } else {
        my_putchar(x);
        my_putchar(y);
        my_putchar(z);
        my_putchar(',');
        my_putchar(' ');
    }
}
