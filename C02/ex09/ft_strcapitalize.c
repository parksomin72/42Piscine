#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int capitalize_next = 1;

    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] -= 32;
            else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
                str[i] += 32;
            
            capitalize_next = 0;
        }
        else
        {
            capitalize_next = 1;
        }
        i++;
    }
    return (str);
}

/*int main()
{
    char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(string));
    return 0;
}*/
