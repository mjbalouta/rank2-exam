#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 1;
	int temp;

	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
	i++;
	}
}

int main(void)
{
	int tab[] = {4, 4, 50000, 6, 1, 4};
	sort_int_tab(tab, 6);
	int i = 0;
	while (i < 6)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}