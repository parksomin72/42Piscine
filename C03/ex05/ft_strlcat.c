#include <stdio.h>

unsigned int ft_strlen(char *s)
{
	unsigned len = 0;

	while (s[len])
		len++;
	return (len);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int src_len = ft_strlen(src);
	unsigned int dest_len = ft_strlen(dest);


	if (size <= dest_len)
		return (src_len + size);

	i = dest_len;

	while (src[j] && i < size -1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest_len + src_len);
}
