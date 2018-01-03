#include <stdlib.h>
#include "ft_header.h"

char 	*ft_strstr(char *str, char *to_find)
{
	int i, j;
	char *ret = "\0";

	i = j = 0;
	if (to_find == '\0')
		return (str);
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while ((str[i + j] == to_find[j]) && (str[i + j] != '\0') && (to_find[j] != '\0')) 
				j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return ret;
}
