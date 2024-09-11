#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (1);

	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char alpha[] = "";

	if(ft_str_is_alpha(alpha))
	{
		printf("The string: %s  is alpha\n", alpha);
	}
	else
	{
		printf("The string: %s  is not alpha\n", alpha);
	}
}*/
