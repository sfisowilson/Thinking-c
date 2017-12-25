#include "ft_header.h"

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tempdiv, tempmod;

	if (*a >= *b)
	{
		tempdiv = *a / *b;
		tempmod = *a % *b;
		*a = tempdiv;
		*b = tempmod;
	}
}
