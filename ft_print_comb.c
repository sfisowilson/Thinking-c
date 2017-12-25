#include "ft_header.h"

void	disp(int *tab, int n)
{
	int i, j, skip;

	i = 0;
	skip = 1;
	if (n > 0)
	{
		while (i < (n-1))
		{
			if (tab[i] < tab[i + 1])
			{
				ft_putnbr(tab[i]);
			}
			i++;
		}
		if (i == (n-1))
		{
			if (tab[i] < 9)
			{
				ft_putnbr(tab[i]);
				tab[i]++;
				skip = 0;
			}
			else if (tab[i] == 9)
			{
				ft_putnbr(tab[i]);
			}
		}
		if (tab[i] == 9 && skip)
		{
			while (i > 0)
			{
				if (tab[i] > (tab[i - 1] + 1))
				{
					i--;
					while (i < n)
					{
						tab[i]++;
						tab[i + 1] = tab[i];
						i++;
					}
					break;
				}
				else
					i--;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[n];

	i = 0;
	while (n > i)
	{
		tab[i] = i;
		i++;
	}
	if (n > 0)
	{
		while (1)
		{
			disp(tab, n);
			if ((tab[n -1] == 9) && (tab[0] == (9 - (n -1))))
			{
				ft_putstr(", ");
				disp(tab, n);
				break;
			}
			ft_putstr(", ");
		}
	}
}
