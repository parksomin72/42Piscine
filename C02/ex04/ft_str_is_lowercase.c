#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i = 0;

	if (str[i] == '\0')
		return (1);

	while(str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char name[] = "narUto";
	char name1[] = "naruto";

	if (ft_str_is_lowercase(name))
		printf("%s is a lowercase string\n", name);
	else
		printf("%s is a not lowercase string\n", name);

	if (ft_str_is_lowercase(name1))
                printf("%s is a lowercase string\n", name1);
        else
                printf("%s is a not lowercase string\n", name1);
}*/
