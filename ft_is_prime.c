int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			return(0);
		i++;
	}
	if (nb > 2)
		return(1);
	else
		return(0);
}
