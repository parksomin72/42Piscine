#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int c = 0;
	
	while (c < 10)
	{
		int b = c + 1;

		while (b < 10)
		{
			int a = b + 1;
		       
			while (a < 10)
			{
				ft_putchar(c + 48);
				ft_putchar(b + 48);
				ft_putchar(a + 48);
				if (c != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				a++;
			}
			b++;
		}
		c++;
	}
}

/*int main()
{
	ft_print_comb();
}*/
