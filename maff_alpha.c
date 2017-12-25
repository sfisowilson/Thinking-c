#include "ft_header.h"

void    maff_alpha(void)
{
    char up, low;

    up = 'A';
    low = 'a';
    while ((low <= 'z') && (up <= 'Z'))
    {
        up++;
        ft_putchar(low);
        ft_putchar(up);
        low +=2;
        up++;
    }
    ft_putchar('\n');
}
