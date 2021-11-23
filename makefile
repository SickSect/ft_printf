name = ft_printf
src = main.c ft_printf.c ft_putchar_fd.c ft_putnbr_fd.c ft_bzero.c
obj = $(src:.c=.o)
rm = rm -f

$(name): $(obj)
	gcc -Wall -Werror -Wextra $(obj) -o $(name)

all: $(name)

%.o : %.c ft_printf.h
	gcc -Wall -Wextra -Werror -c  $<

clean:
	$(rm) $(obj)

fclean: clean
	$(rm) $(name)

re: fclean $(name)

.PHONY: all clean re fclean bonus
