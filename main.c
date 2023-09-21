#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int x;
	int y;
	/* int i = -42; */
	x = ft_printf("test o%x", 739);
	y = printf("test o%x", 739);
	ft_printf("\n x = %i y = %i ", x, y, '\0');
}


