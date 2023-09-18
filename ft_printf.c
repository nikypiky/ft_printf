#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

void	func_search(char c, void *var)
{
	if (c == 'c')
		write(1, var, 1);
	//else if (c == 's')
	//	ft_putstr((char *)var);
}

int	ft_printf(const char *str , ...)
{
	va_list args;
	int		c;

    va_start(args, str);
    while(*str)
    {
        if(*str == '%')
        {
			c = va_arg(args, int);
            func_search(*(str + 1), &c);
			printf("%c ", c);
			printf("%ld", ft_strlen("help"));
            str += 2;
        }
		write(1, str, 1);
        str++;
	}
	va_end(args);
	return (1);
}

