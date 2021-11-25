#include "ft_printf.h"

int main()
{
  char *str = "pointer_to_string"; //17
  char *str_a = "q";
  printf(" %d\n",ft_printf("test0"));
  printf(" %d\n",ft_printf(" test "));
  printf(" %d\n",ft_printf("test1 \n"));
  printf(" %d\n",ft_printf("test1 %d", -123));
  printf(" %d\n",ft_printf("test2 %d", -123));
  printf(" %d\n",ft_printf("test3 %d", 0));
  printf(" %d\n",ft_printf("test4 %s", "qweqwe"));
  printf(" %d\n",ft_printf("test5 %s", str));
  printf(" %d\n",ft_printf("test5 %c", 'a'));
  printf(" %d\n",ft_printf("test5 %c", *str_a));
  printf(" %d\n",ft_printf("test6 %u", -123));
  printf(" %d\n",ft_printf("test7 %u", 123));
  printf(" %d\n",ft_printf("test8 %u", 0));
  printf("%x %X %x %X",123, 123, -123, -123);
  printf(" %d\n",ft_printf("test9 %x",123));
  printf(" %d\n",ft_printf("test9 %X",123));
  printf(" %d\n",ft_printf("test9 %x",-123));
  printf(" %d\n",ft_printf("test9 %X",-123));

}
