#include "ft_header.h"

int	safe_checker(int *rows, int y, int x)
{
	int i;

	i = 0;
	if (y == 0)
		return (1);
	while (i < y)
	{
		if ((rows[i] == x) || (rows[i] == x + y - i) || (rows[i] == x - y + i))
			return (0);
		i++;
	}
	return (1);
}

void	print_result(int *rows, int n)
{
	int x, y;

	y = 0;
	while (y < n)
	{
		x = 0;
		while (x < n)
		{
			if (x == rows[y])
				ft_putnbr(x + 1);
			x++;
		}
		if (y == (n - 1))
			ft_putchar('\n');
		y++;
	}
}

int	puzzle_helper(int *rows, int y, int n)
{
	int x;
	static int count = 0;

	x = 0;
	while (x < n)
	{
		if (safe_checker(rows, y, x))
		{
			rows[y] = x;
			if (y == (n - 1))
			{
				print_result(rows, n);
				count++;
			}
			else
				puzzle_helper(rows, y + 1, n);
		}
		x++;
	}
	return (count);
}

int	ft_n_queens_puzzle(int n)
{
	//int n; 
	int y;
	int rows[n];

	//n = 8;
	y = 0;
	return(puzzle_helper(rows, y, n));
}
