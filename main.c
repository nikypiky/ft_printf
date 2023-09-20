#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int a = 1;
	/* long int *b = &a; */
	void *c = &a;
	/* printf("%p", c); */
	ft_printf(("%c, %s, %p, %d, %i, %u, %x, %X, %%\n"), 'c', "hello", c, a, 11, 12, 123, 123);
	printf(("%c, %s, %p, %d, %i, %u, %x, %X, %%"), 'c', "hello", c, a, 11, 12, 123, 123);
}


