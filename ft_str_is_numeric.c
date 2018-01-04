#include "ft_header.h"

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	if (is_nbr(str[i]))
	{
		while (is_nbr(str[i]))
			i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}
