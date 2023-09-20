#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	long int a = 1;
	/* long int *b = &a; */
	void *c = &a;
	/* printf("%p", c); */
	/* ft_printf(" %p %p ", c, b); */
	ft_putlong_base(&c, "01");
}


