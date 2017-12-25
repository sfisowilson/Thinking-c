#include "ft_header.h"

void    rush(int x, int y)
{
    if ((x > 0) && (y > 0))
    {
        int i;

        i = 0;
        rush_cpu('/', '*', '\\', x);
        while (y > i + 2)
        {
            rush_cpu('*', ' ', '*', x);
            i++;
        }
        if (y == i + 2)
        {
            rush_cpu('\\', '*', '/', x);
        }
    }
    else
        ft_putchar('\n');


}
