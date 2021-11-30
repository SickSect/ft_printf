#include "ft_printf.h"


void ft_void_pointer(void *ptr, int *bytes)
{
  unsigned long int adress;

  adress = (unsigned long int)ptr;
  if (!adress)
  {
    write (1, "(nil)", 5);
    (*bytes) += 5;
  }
  else
  {
    write(1, "0x", 2);
    (*bytes) += 2;
    ft_hex(adress,bytes);
  }
}
