#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i = 0;
	unsigned j = 0;

	while (dest[i])
		i++;

	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	
	dest[i] = '\0';

	return (dest);
}
