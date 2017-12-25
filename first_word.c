#include "ft_header.h"

void    first_word(char *str)
{
    int i;

    i = 0;
    while (isitspace(str[i]))
        i++;
    while ((str[i] != '\0') && !(isitspace(str[i])))
    {
        ft_putchar(str[i]);
        i++;
    }
}
