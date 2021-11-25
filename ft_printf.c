#include "ft_printf.h"

int ft_linker(va_list arg,char type)
{
  if(type == 'd' || type == 'i')
    return (ft_digit(va_arg(arg,int), 1));
  else if (type == 's')
    return (ft_string(va_arg(arg,char *), 1));
  else if (type == 'c')
  {
    ft_putchar_fd(va_arg(arg, int), 1);
    return (1);
  }
  else if (type == 'u')
    return (ft_unsigned(va_arg(arg,int),1));
  else if(type == '%')
    return(1);
  else if (type == 'X')
    return (ft_hex(va_arg(arg,int),1));


  return(0);
}

int ft_printf(const char *stroke, ...)
{
  int i;
  int bytes;
  va_list arg;
  va_start (arg,stroke);

  i = 0;
  bytes = 0;
  while(stroke[i] != '\0')
  {
    if(stroke[i] == '%')
    {
      bytes += ft_linker(arg,stroke[++i]);
    }
    else
    {
      ft_putchar_fd(stroke[i],0);
      bytes++;
    }
    i++;
  }
  return(bytes);
}
