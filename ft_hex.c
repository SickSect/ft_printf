#include "ft_printf.h"

int ft_hex(size_t num, int fd)
{
  int count;
  int tmp;

  count = 0;
  if(num)
  {
      tmp = num % 16;
      num = num / 16;
      count += ft_hex(num,fd);
      ft_putchar_fd(HEX[tmp],fd);
  }
  if(num == 0 && count == 0)
  {
    ft_putchar_fd('0',fd);
    return (count + 1);
  }
  return (count);
}
