#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char name[] = "Ahmed";
	char dest[20];

	ft_strncpy(dest, name, 7);
	printf("%s\n", dest);
	ft_strncpy(dest, name, 3);
        printf("%s\n", dest);
}*/
