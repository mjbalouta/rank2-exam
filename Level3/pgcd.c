#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 3)
		return (printf("\n"));
	unsigned int a = atoi(av[1]);
	unsigned int b = atoi(av[2]);
	if (!a || !b)
		return (printf("\n"));
	unsigned int res1 = 0;
	unsigned int res2 = 1;
	int i = 1;
	int j = 1;
	while (res1 != res2)
	{
		if (a % i == 0)
			res1 = a / i;
		else
		{
			while (a % i != 0)
			{
				i++;
			}
			res1 = a / i;
		}
		if (b % i == 0)
			res2 = b / j;
		else
		{
			while (b % j != 0)
			{
				j++;
			}
			res2 = b / j;
		}
		if (res1 > res2)
			i++;
		else if (res1 < res2)
			j++;
	}
	printf("%d\n", res1);
	return (0);
}