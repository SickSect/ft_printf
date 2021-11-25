#include "ft_printf.h"

int ft_unsigned(long int n,int fd)
{
    int bytes;
    size_t new;

    if(n < 0)
    {
      n *= -1;
      new = (size_t)n;
      bytes = ft_digit(new,fd);
    }
    else
    {
      bytes = ft_digit(n,fd);
    }
    return (bytes);
}
