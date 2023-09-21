#include "libftprintf.h"

void	ft_putptr(char *ptr, int *pi)
{
	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		*pi += 5;
	}
	else
	{
		write(1, "0x", 2);
		ft_putlong_base((long unsigned int)ptr, "0123456789abcdef", pi);
		*pi += 2;
	}
}
