#include "ft_printf.h"

void ft_string(char *str,int *bytes)
{
  int i;

  i = 0;
  if(str == NULL)
    ft_string("(null)", bytes);
  else
  {
    while (str[i])
    {
      ft_putchar(str[i], bytes);
      i++;
    }
  }
}
