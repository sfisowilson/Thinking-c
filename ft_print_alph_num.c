#include "ft_header.h"

void	ft_print_alph_num(char a, char sign, char z)
{
	if ((a >= 'a') && (z <= 'z'))
	{
		if (sign == '-')
		{
			while (z >= a)
			{
				ft_putchar(z);
				z--;
			}
		}
		else if (sign == '+')
		{
			while (z >= a)
			{
				ft_putchar(a);
				a++;
			}
		}
	}
	else if ((a >= '0') && (z <= '9'))
	{
		if (sign == '-')
		{
			while (z >= a)
			{
				ft_putchar(z);
				z--;
			}
		}
		else if (sign == '+')
		{
			while (z >= a)
			{
				ft_putchar(a);
				a++;
			}
		}
	}
}
