#include "ft_printf.h"

int ft_putnbr(long long nb)
{
    unsigned long int    n;
    int offset = 0;

    if(nb < 0)
    {
        n = -nb ;
        offset += ft_putchar('-');
    }
    else
        n = nb;
    if (n >= 10)
    {
        offset += ft_putnbr((n / 10));
        offset += ft_putnbr((n % 10));
    }
    else
        offset += ft_putchar(n + 48);
    return(offset);
}
