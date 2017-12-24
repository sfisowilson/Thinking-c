#include "ft_header.h"

int	ft_atoi(const char *str)
{
	int i, sign, ret;

	i = ret = 0;
	sign = 1;
	while (isitspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		ret = (ret * 10) + (str[i] - '0');
		i++;
	}
	return (ret * sign);
}
