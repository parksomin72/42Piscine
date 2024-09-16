#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i = 0;
	int swap;

	while (i < size - 1)
	{
		int j = 0;
		while (j < size - i - 1)
		{
			if (tab[j + 1] < tab[j])
			{
				swap = tab[j];
				tab[j] = tab [j + 1];
				tab[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}
