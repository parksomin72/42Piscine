#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void ft_puthex(unsigned char c)
{
    char hexa[16] = "0123456789abcdef";

    ft_putchar(hexa[c / 16]);
    ft_putchar(hexa[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < 32 || str[i] == 1)
        {
            ft_putchar('\\');
            ft_puthex((unsigned char)str[i]);
        }
        else
        {
            ft_putchar(str[i]);
        }
        i++;
    }
}
