#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <fcntl.h>

int     ft_printf(const char *, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long long nb);
int    ft_xoxo(unsigned long int nb, char *t, int *offset);
#endif