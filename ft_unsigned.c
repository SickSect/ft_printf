#include "ft_printf.h"

void ft_unsigned(unsigned int n,int *bytes)
{
  long num;

	num = n;
	if(num < 0)
	{
		num *= -1;
		ft_unsigned(num,bytes);
  }
	if (num > 9 || num < -9)
	{
		ft_unsigned(num / 10, bytes);
		ft_unsigned(num % 10, bytes);
	}
	else
	{
		ft_putchar('0' + num, bytes);
	}
}
