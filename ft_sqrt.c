int	ft_sqrt(int nb)
{
	int number;

	number = 2;
	if (nb > 1)
	{
		while (number * number < nb)
		{
			number++;
		}
		if (nb % number == 0)
			return(number);
	}
	return(0);
}
