#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int x;
	int y;
	x = ft_printf("hel%c", 'a');
	y = printf("hel%i", 'a');
	ft_printf("\n x = %i y = %i ", x, y, '\0');
}


