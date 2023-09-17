Library		= libftprintf

files 	   = ft_printf \
			
Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= $(OUTN)

LIBFT_DIR = ../libft

all: $(NAME) run

$(NAME): 
	@$(Compiler) $(CmpFlags) -c $(CFILES) -o $(OFILES) 
	@ar -rc $(OUTN) $(OFILES) 

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

run:
	@cc $(CmpFlags) -c main.c -o main.o 
	@cc $(CmpFlags) -o main main.o libftprintf.a libft.a
	@./main
	@echo

.PHONY: all, clean, fclean, re, run

