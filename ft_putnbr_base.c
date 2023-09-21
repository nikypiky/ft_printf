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

int	putdec_min(int n, int *pi)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*pi += 11;
		return (1);
	}
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base, int *pi)
{
	int	n;
	int	l;

	if (is_invalid(base) == 0 || putdec_min(nbr, pi) == 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= (-1);
		(*pi)++;
	}
	l = ft_strlen(base);
	n = (nbr % l);
	nbr = nbr / l;
	if (nbr > 0)
		ft_putlong_base(nbr, base, pi);
	write (1, &base[n], 1);
	(*pi)++;
}
