#include "ft_header.h"

char	*ft_strrev(char *str)
{
	int len, i;
	char temp;
	i = temp = 0;
	len = ft_strlen(str);

	while ((len - 1) > i)
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		len--;
		i++;
	}
	str[len + i] = '\0';
	return(str);
}
