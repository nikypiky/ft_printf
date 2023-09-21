Library		= libftprintf

files 	   = ft_printf \
			 ft_putstr \
			 ft_putdec \
			 ft_putnbr_base \
			 ft_putlong_base \
			 ft_unsigned_putdec \
			 ft_putptr \
			 ft_putunsi_base \
			
Compiler	= cc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= $(OUTN)

all: $(NAME) run

$(NAME):
	@$(Compiler) $(CmpFlags) -c $(CFILES) -g -I./
	@ar -rc $(OUTN) $(OFILES) $(OBONUS)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

run:
	@cc $(CmpFlags) -c main.c -o main.o -g
	@cc $(CmpFlags) -o main main.o libftprintf.a libft.a -g
	@./main
	@echo

.PHONY: all, clean, fclean, re, run

