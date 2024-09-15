#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i = 0;

	if (to_find[0] == '\0')
		return(str);

	while (str[i])
	{
		int j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
    char haystack[] = "Hello, world!";
    char needle[] = "world";

    char *result = ft_strstr(haystack, needle);

    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not found\n");

    return 0;
}*/
