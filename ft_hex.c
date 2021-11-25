#include "ft_printf.h"

int ft_hex(size_t num, int fd)
{
  int count;

  count = 0;
  if(num == 0)
  {
    ft_putchar_fd('0',fd);
    return (count + 1);
  }
  else if(num / 16 > 0)
    count = 
}
