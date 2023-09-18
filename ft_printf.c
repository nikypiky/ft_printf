#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

void	func_search(char c, void *str, void *ints)
{
	if (c == 'c')
		write(1, str, 1);
	else if (c == 's')
		ft_putstr((char *)ints);
}

int	ft_printf(const char *str , ...)
{
	va_list args;
	int		c;
	char	*ptr;

    va_start(args, str);
    while(*str)
    {
        if(*str == '%')
        {
			str++;
			if (NULL != ft_memchr("cdiuxX", *str, 6))
				c = va_arg(args, int);
			else if(NULL != ft_memchr("sp", *str, 2))
				ptr = va_arg(args, char *);
			else if(*str + 1 == '%')
				write(1, "%", 1);
			func_search(*str, ptr, &c);
        }
		write(1, str, 1);
        str++;
	}
	va_end(args);
	return (1);
}
