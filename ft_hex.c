#include "ft_printf.h"

void ft_hex(unsigned int n, int *bytes)
{

  if (n < 16)
  {
    ft_putchar(HEX[n],bytes);
  }
  else
  {
    ft_hex(n / 16, bytes);
    ft_putchar (HEX[n % 16], bytes);
  }
}
