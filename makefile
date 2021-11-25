name = ft_printf
src =	ft_printf.c main.c ft_digit.c ft_bzero.c ft_putchar.c \
	ft_string.c ft_unsigned.c
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
