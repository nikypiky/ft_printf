#include "libftprintf.h"

int	putnbr_digit_unsigned_nbr(unsigned int nbr)
{
	int	str;

	str = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= 10;
		str++;
	}
	return (str);
}

void	ft_unsigned_putdec(unsigned int n)
{
	char			string[12];
	unsigned int	nbr;
	unsigned int	str;

	nbr = (unsigned int)n;
	str = putnbr_digit_unsigned_nbr(n);
	if (nbr == 0)
		string[0] = '0';
	string[str] = '\0';
	while (nbr != 0)
	{
		string[str - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		str--;
	}
	write(1, string, ft_strlen(string));
}
