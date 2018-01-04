#include "ft_header.h"
int	is_char(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else if((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_char(str[i]))
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] - 32;
			while (is_char(str[i]))
			{
				i++;
			}
		}
		i++;
	}
	return (str);
}
