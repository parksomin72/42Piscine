#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int main()
{
	int a = 402;
	int b = 82;

	printf("a = %d, b = %d\n", a, b);

	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}*/
