#include "ft_printf.h"

void ft_putchar(int c, int *bytes)
{
	write(1, &c, 1);
	(*bytes)++;
}
