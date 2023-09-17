#include "/home/nik/42-core/libft.h"
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *str , ...)
{
	va_list(args);
    va_start(args, str);
    while(*str)
    {
        if(*str == '%')
        {
            /* func_search(*str); */
			printf("test ");
			printf("%ld", ft_strlen("help"));
            str++;
        }
		write(1, str, 1);
        str++;
	}
	return (1);
}
