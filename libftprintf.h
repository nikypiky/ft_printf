#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "libftprintf.h" 
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char * str, ...);
void	ft_putstr(char *str);
void	ft_putdec(int *nbr);

#endif
