#include "libftprintf.h"

void	ft_putstr(char *str, int *pi)
{
	if (str == NULL)
	{
		write (1, "(null)", 6);
		*pi += 6;
		return ;
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		(*pi)++;
	}
}
