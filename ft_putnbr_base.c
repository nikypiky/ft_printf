#include "libftprintf.h"

int	is_invalid(char *base)
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	n;
	int	l;

	if (is_invalid(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= (-1);
	}
	l = ft_strlen(base);
	n = (nbr % l);
	nbr = nbr / l;
	if (nbr > 0)
		ft_putnbr_base(nbr, base);
	write (1, &base[n], 1);
}


