#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	char *str;
	str = ft_strdup("hello % test");
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
