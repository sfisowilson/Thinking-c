int	ft_iterative_factorial(int nb)
{
	int i, factorial;

	i = factorial  = 1;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			factorial = factorial * i;
			i++;
		}
		if (nb == 0)
			return (1);
		else
			return (factorial);
	}
	else
		return (0);
}
