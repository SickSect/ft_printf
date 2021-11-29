#include "ft_printf.h"

void ft_hex_X(unsigned int n, int *bytes)
{

  if (n < 16)
  {
    ft_putchar(HEX_X[n],bytes);
  }
  else
  {
    ft_hex_X(n / 16, bytes);
    ft_putchar (HEX_X[n % 16], bytes);
  }
}
