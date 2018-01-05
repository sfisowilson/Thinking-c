#include "ft_header.h"

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i, j, k;

	k = 0;
	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size <= i)
		return (j + size);
	while ((dest[k] != '\0') && (k < (size - 1)))
	{
		k++;
	}
	while (*src && i < (size - 1))
	{
		dest[k] = *src;
		src++;
		k++;
	}
	dest[k] = '\0';
	return (i + j);

}
