#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
	ft_putchar('\n');
}

/*int main()
{
	int a = 10;
	int z = -11;
	ft_is_negative(a);
	ft_is_negative(z);
}*/
