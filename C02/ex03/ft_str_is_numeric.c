#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (1);

	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char num[] = "892";
	char name[] = "ahmed";

	if (ft_str_is_numeric(num))
		printf("the %s is a number\n", num);
	else
		printf("the %s is not a number\n", num);


	if (ft_str_is_numeric(name))
                printf("the %s is a number\n", name);
        else
                printf("the %s is not a number\n", name);

}*/
