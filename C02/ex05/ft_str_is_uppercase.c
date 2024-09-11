#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int i = 0;

	 if (str[i] == '\0')
		 return (1);

	 while (str[i])
	 {
		 if (!(str[i] >= 'A' && str[i] <= 'Z'))
			 return (0);
		 i++;
	 }
	 return (1);
}
/*
int main()
{
        char name[] = "NARUTO";
        char name1[] = "NAruto";

        if (ft_str_is_uppercase(name))
                printf("%s is a uppercase string\n", name);
        else
                printf("%s is a not uppercase string\n", name);

        if (ft_str_is_uppercase(name1))
                printf("%s is a uppercase string\n", name1);
        else
                printf("%s is a not upperrcase string\n", name1);
}*/
