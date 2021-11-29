name = libftprintf.a
src =	ft_printf.c ft_digit.c ft_bzero.c ft_putchar.c \
	ft_string.c ft_unsigned.c ft_hex.c ft_hex_X.c
obj = $(src:.c=.o)
rm = rm -f

$(name): $(obj)
	ar rc $(name) $(obj)

all: $(name)

%.o : %.c ft_printf.h
	gcc -Wall -Wextra -Werror -c  $<

clean:
	$(rm) $(obj)

fclean: clean
	$(rm) $(name)

re: fclean $(name)

.PHONY: all clean re fclean bonus
