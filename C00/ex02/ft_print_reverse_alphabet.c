#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		ft_putchar(alpha);
		alpha--;
	}
}

/*int main()
{
	ft_print_reverse_alphabet();
}*/
