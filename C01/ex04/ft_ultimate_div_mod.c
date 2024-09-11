#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div = *a / *b;
	int mod = *a % *b;

	*a = div;
	*b = mod;
}

/*int main()
{
	int num = 58;
	int num1 = 10;

	printf("a = %d, b = %d\n", num, num1);
	ft_ultimate_div_mod(&num, &num1);
	printf("a = %d, b = %d\n", num, num1);
}*/
