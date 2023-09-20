#include "libftprintf.h"

int	is_invalid_long(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[i + j] != 0)
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		j = 1;
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putlong_base(unsigned long nbr, char *base)
{
	unsigned long	n;
	unsigned long	l;

	if (is_invalid_long(base) == 0)
		return ;
	l = ft_strlen(base);
	n = (nbr % l);
	nbr = nbr / l;
	if (nbr > 0)
		ft_putlong_base(nbr, base);
	write (1, &base[n], 1);
}


