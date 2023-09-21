#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int x;
	int y;
	/* int i = -42; */
	x = ft_printf("%i %i", 2147483647, (int)-2147483648);
	y = printf("%d %i", 2147483647, (int)-2147483648);
	ft_printf("\n x = %i y = %i ", x, y, '\0');
}


