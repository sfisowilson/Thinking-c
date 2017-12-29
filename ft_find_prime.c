#include "ft_header.h"

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		if ((nb % 2) == 0)
			nb++;
		else
		nb += 2;
	}
	return(nb);
}
