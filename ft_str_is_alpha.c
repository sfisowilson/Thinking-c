#include "ft_header.h"

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	if (is_char(str[i]))
	{
		while (is_char(str[i]))
			i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}
