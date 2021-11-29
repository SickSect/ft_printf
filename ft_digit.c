#include "ft_printf.h"

void ft_digit(int n, int *bytes)
{
	long num;

	num = n;
	if(num < 0)
	{
		num *= -1;
		ft_putchar('-',bytes);
	}
	if (num > 9)
	{
		ft_digit(num / 10, bytes);
		ft_digit(num % 10, bytes);
	}
	else
	{
		ft_putchar('0' + num, bytes);
	}
}
