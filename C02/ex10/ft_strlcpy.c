#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int srclen = 0;

	while (src[srclen])
		srclen++;

	if (size > 0)
	{
		while (i < size - 1 &&  src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
