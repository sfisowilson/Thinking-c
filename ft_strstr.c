#include <stdlib.h>
#include "ft_header.h"

char 	*ft_strstr(char *str, char *to_find)
{
	int i, j, len;
	char *null;
	char *ret;
	
	null = "\0";
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
		{
			len = ft_strlen(str);
			ret = (char*)malloc(sizeof(char) * (len - i + 1));
			j = 0;
			while (str[i] != '\0')
			{
				ret[j] = str[i];
				j++;
				i++;
			}
			return (ret);
		}
		i++;
	}
	return (null);
}
