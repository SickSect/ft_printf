# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

#include <stdio.h>

int ft_printf(const char *str, ...);
int	ft_putnbr_fd(int n, int fd);
int	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *dest, size_t n);

# endif
