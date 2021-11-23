#include "ft_printf.h"

int ft_linker(va_list arg, char type)
{
      int   bytes;

      bytes = 0;
      if(type == 'd')
            bytes = ft_putnbr_fd(va_arg(arg, int),0);

      return (bytes);
}

int ft_printf(const char *str, ...)
{
      int   bytes;
      int   i;
      va_list arg;
      va_start(arg, str);

      bytes = 0;
      i = 0;
      while (str[i] != '\0')
      {
            if (str[i] == '%')
                  bytes += ft_linker(arg,str[++i]);
            else
                  bytes += ft_putchar_fd(str[i],0);
            i++;
      }
      return (bytes);
}
