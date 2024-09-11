#include <unistd.h>
void ft_putchar(char c)
{
        write(1, &c, 1);
}

void ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
                ft_putchar('-');
                ft_putchar('2');
                ft_putnbr(147483648);
        }
        else if (nb < 0)
        {
                ft_putchar('-');
                ft_putnbr(-nb);
        }
        else if (nb >= 10)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
        {
                ft_putchar(nb + 48);
        }
}

/*int main()
{
        int a = -2147;
        int b = 2004;
        ft_putnbr(a);
        ft_putchar('\n');
        ft_putnbr(b);
        ft_putchar('\n');

}*/
