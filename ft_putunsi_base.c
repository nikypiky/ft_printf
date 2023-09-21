#include "libftprintf.h"

int	is_invalid_int(char *base)
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

void	ft_putunsi_base(unsigned int nbr, char *base, int *pi)
{
	unsigned int	n;
	unsigned int	l;

	if (is_invalid_int(base) == 0)
		return ;
	l = ft_strlen(base);
	n = (nbr % l);
	nbr = nbr / l;
	if (nbr > 0)
		ft_putunsi_base(nbr, base, pi);
	write (1, &base[n], 1);
	(*pi)++;
}
