#include "/home/nik/42-core/libft.h"
#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

void	func_search(char c, char *ptr, void *ints)
{
	if (c == 'c')
		write(1, ints, 1);
	else if (c == 's')
		ft_putstr((char *)ptr);
	else if (c == 'p')
		ft_putlong_base(*(long unsigned int *)ptr, "0123456789abcdef");
	else if (c == 'd')
		ft_putdec(*(int *)ints);
	else if (c == 'i')
		ft_putnbr_base(*(int *)ints, "0123456789");
	else if (c == 'u')
		ft_unsigned_putdec(*(unsigned int *)ints);
	else if (c == 'x')
		ft_putnbr_base(*(int *)ints, "0123456789abcdef");
	else if	(c == 'X')
		ft_putnbr_base(*(int *)ints, "0123456789ABCDEF");
}

int	ft_printf(const char *str , ...)
{
	va_list args;
	int		c;
	void	*ptr;

    va_start(args, str);
    while(*str)
    {
        while(*str == '%')
        {
			if (NULL != ft_memchr("cdiuxX", *(str + 1), 6))
				c = va_arg(args, int);
			else if(NULL != ft_memchr("sp", *(str + 1), 2))
				ptr = va_arg(args, void *);
			func_search(*(str + 1), ptr, &c);
			if(*(str + 1) == '%')
				write(1, "%", 1);
			str += 2;
        }
		write(1, str, 1);
		if (*str)
			str++;
	}
	va_end(args);
	return (1);
}

