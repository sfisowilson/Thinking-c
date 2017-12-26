void ft_sort_integer_table(int *tab, int size)
{
	int i, flag, temp;

	i = temp = 0;
	flag = 1;
	while (flag)
	{
		flag = i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				flag = 1;
			}
			i++;
		}
	}
}
