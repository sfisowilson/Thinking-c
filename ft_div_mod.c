void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a >= b)
	{
		*div = a / b;
		*mod = a % b;
	}
}
