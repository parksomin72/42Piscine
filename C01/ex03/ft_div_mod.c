#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int num = 58;
	int num2 = 10;

	int div, mod;
	ft_div_mod(num, num2, &div, &mod);
	printf("a = %d, b = %d\ndiv = %d, mod = %d\n", num, num2, div, mod);
}*/
