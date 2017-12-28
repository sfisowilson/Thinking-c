int	ft_iterative_power(int nb, int power)
{
	int temp;

	if (power >= 0)
	{
		if (power > 0)
		{
			temp = nb;
			while (power - 1)
			{
				temp *= nb;
				power--;
			}
		}
		else if(nb < 0)
			temp = -1;
		else
			temp = 1;
		return (temp);
	}
	else
		return (0);
}
