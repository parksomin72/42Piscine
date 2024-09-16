#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *s)
{
    int len = 0;
    while (s[len])
        len++;
    return (len);
}


int is_valid_base(char *base)
{
    int i = 0;
    int base_len = ft_strlen(base);

    if (base_len < 2)
        return (0);

    while (i < base_len)
    {
        if (base[i] == '+' || base[i] == '-')
            return (0);

	int j = i + 1;
        while (j < base_len)
	{
            if (base[i] == base[j])
                return (0);
	    j++;
        }
	i++;
    }
    return (1);
}


void ft_putnbr_base(int nbr, char *base)
{
    int base_len;

    if (!is_valid_base(base))
        return;

    base_len = ft_strlen(base);

    if (nbr < 0)
    {
        ft_putchar('-');
        if (nbr == -2147483648)
	{
            ft_putnbr_base(-(nbr / base_len), base);
            ft_putchar(base[-(nbr % base_len)]);
            return;
        }
        nbr = -nbr;
    }

    if (nbr >= base_len)
        ft_putnbr_base(nbr / base_len, base);
    ft_putchar(base[nbr % base_len]);
}
