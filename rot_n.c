#include "ft_header.h"

void	rot_n(int n, char *str)
{
	int i, j;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			c = str[i];
			j = 0;
			while (j < n)
			{
				if ((c == 'z') || (c == 'Z'))
					c = c - 25;
				else
					c++;
				j++;
			}
			ft_putchar(c);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
