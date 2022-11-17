#include "ft_printf.h"

int    ft_putstr(char *str)
{
    int offset = 0;
    size_t i;
    i = 0;
    if(!str)
        str = "(null)";
    while (str[i] != '\0')
    {
       offset += ft_putchar(str[i]);
        i++;
    }
    return(offset);
}