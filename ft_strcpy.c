#include "ft_header.h"
#include <stdlib.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i, len;

    i = 0;
    len = ft_strlen(s2);
    s1 = (char *)malloc(sizeof(char) * len);	
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
