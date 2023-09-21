#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"

int		ft_printf(const char * str, ...);
void	ft_putstr(char *str, int *pi);
void	ft_putdec(int n, int *pi);
void	ft_putnbr_base(int nbr, char *base, int *pi);
void	ft_unsigned_putdec(unsigned int n, int *pi);
void	ft_putlong_base(unsigned long u, char *base, int *pi);
void	ft_putptr(char *ptr, int *pi);

#endif
