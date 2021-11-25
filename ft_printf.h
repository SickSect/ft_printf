#ifndef PRINTF_H
#define PRINTF_H

#define HEX "0123456789abcdef"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n);
int ft_string(char *str,int fd);
void ft_putchar_fd(char c, int fd);
int ft_digit(int n, int fd);
int ft_printf(const char *, ...);
int ft_linker(va_list arg,char type);
int ft_unsigned(long int n,int fd);


#endif
