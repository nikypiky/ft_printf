#include "libftprintf.h"

int	putnbr_digit_nbr(int nbr)
{
	int	str;

	str = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		str++;
	while (nbr)
	{
		nbr /= 10;
		str++;
	}
	return (str);
}

/* int	putdec_min(int n, int *pi) */
/* { */
/* 	if (n == -2147483648) */
/* 	{ */
/* 		write(1, "-2147483648", 12); */
/* 		*pi += 11; */
/* 		return (1); */
/* 	} */
/* 	else */
/* 		return (0); */
/* } */

void	ft_putdec(int n, int *pi)
{
	char			string[12];
	unsigned int	nbr;
	unsigned int	str;

	/* if (putdec_min((int)n, pi) == 1) */
	/* 	return; */
	str = putnbr_digit_nbr(n);
	if (n < 0)
	{
		string[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
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
	*pi += ft_strlen(string);
}
