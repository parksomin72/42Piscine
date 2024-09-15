#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] < 33)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (sign * result);
}
/*
int main()
{
	char num[] = " ---+--+1234ab567";

	printf("%d\n", ft_atoi(num));
}*/
