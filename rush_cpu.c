#include "ft_header.h"

void   rush_cpu(char start, char middle, char end, int x)
{
    int i;

    i = 0;
    if (x  > 0)
    {
        ft_putchar(start);
    }
    while (x > i + 2)
    {
        ft_putchar(middle);
        i++;
    }
    if (x == (i + 2))
    {
        ft_putchar(end);
    }
    ft_putchar('\n');
}
