#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	unsigned int z = 0;
	int temp = 0;

	if (!tab)
		return (0);
	while (i < len)
	{
		z = i + 1;
		while (z < len)
		{	
			if (tab[i] < tab[z])
			{
				temp = tab[z];
				tab[z] = tab[i];
				tab[i] = temp;
			}
			z++;
		}
		i++;
	}
	return (tab[0]);
}

int main(void)
{
	int tab[] = {0, 2888, 100, 2000, 20000};
	int len = 5;
	int result = max(tab, len);
	printf("%d\n", result);
	return (0);
}

// int	max(int *tab, unsigned int len)
// {
// 	unsigned int i = 0;
// 	int max_val = 0;

// 	if (!tab)
// 		return (0);
// 	len = len - 1;
// 	while (i < len)
// 	{
// 		if (tab[i] > tab[len])
// 			max_val = tab[i];
// 		if (tab[len] > tab[i])
// 			max_val = tab[len];
// 		i++;
// 		len--;
// 	}
// 	return (max_val);
// }