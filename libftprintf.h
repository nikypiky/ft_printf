#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"

int		ft_printf(const char * str, ...);
void	ft_putstr(char *str);
void	ft_putdec(int n);
void	ft_putnbr_base(int nbr, char *base);
void	ft_unsigned_putdec(unsigned int n);
void	ft_putlong_base(unsigned long u, char *base);

#endif
