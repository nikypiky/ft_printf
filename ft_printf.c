#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

void	func_search(char c, char *ptr, void *ints, int *pi)
{
	if (c == 'c')
		write(1, ints, 1);
	else if (c == 's')
		ft_putstr((char *)ptr, pi);
	else if (c == 'p')
		ft_putptr(ptr, pi);
	else if (c == 'd')
		ft_putdec(*(int *)ints, pi);
	else if (c == 'i')
		ft_putnbr_base(*(int *)ints, "0123456789", pi);
	else if (c == 'u')
		ft_unsigned_putdec(*(unsigned int *)ints, pi);
	else if (c == 'x')
		ft_putunsi_base(*(unsigned int *)ints, "0123456789abcdef", pi);
	else if (c == 'X')
		ft_putunsi_base(*(unsigned int *)ints, "0123456789ABCDEF", pi);
	else if (c == '%')
		write(1, "%", 1);
	if (c == 'c' || c == '%')
		(*pi)++;
}

int	printf_len(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == '%')
			str += 2;
		if (*str)
		{
			i++;
			str++;
		}
	}
	return (i);
}

void	write_printf(const char *str, const char **ptr)
{
	write(1, str, 1);
	(*ptr)++;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		c;
	void	*ptr;
	int		i;
	int		*pi;

	i = printf_len(str);
	pi = &i;
	va_start(args, str);
	while (*str)
	{
		while (*str == '%')
		{
			if (NULL != ft_memchr("cdiuxX", *(str + 1), 6))
				c = va_arg(args, int);
			else if (NULL != ft_memchr("sp", *(str + 1), 2))
				ptr = va_arg(args, void *);
			func_search(*(str + 1), ptr, &c, pi);
			str += 2;
		}
		if (*str)
			write_printf(str, &str);
	}
	return (i);
}
