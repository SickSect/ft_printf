#include "ft_printf.h"


static int ft_abs(int nbr)
{
	return ((nbr < 0) ? -nbr : nbr);
}

int ft_digit(int n, int fd)
{
	char	str[13];
	int		is_neg;
	int		length;
	int ret;

	is_neg = (n < 0);
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	length = 0;
	while (n != 0)
	{
		str[length++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	ret = length;
	if (is_neg)
		str[ret++] = '-';
	else if (length > 0)
		length--;
	while (length >= 0)
		write(fd, &str[length--], 1);
  return (ret);
}
