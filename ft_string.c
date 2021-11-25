#include "ft_printf.h"

int ft_string(char *str,int fd)
{
  int i;

  i = 0;
  while (str[i])
  {
    ft_putchar_fd(str[i], fd);
    i++;
  }
  return (i + 1);
}
