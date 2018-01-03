#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	dest = (char*)malloc(sizeof(char) * n + 1);
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
