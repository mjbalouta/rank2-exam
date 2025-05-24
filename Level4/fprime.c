#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
		return (printf("\n"));
	int prime = 2;
	int num = atoi(av[1]);
	int nr_div = 0;
	int num_check = 1;
	int number = num;

	if (num == 1)
		return(printf("1\n"));
	while (num > 1)
	{
		nr_div = 0;
		int j = prime;
		while (j > 0)
		{
			if (prime % j == 0)
				nr_div++;
			j--;
		}
		if (nr_div == 2)
		{
			if (num % prime == 0)
			{
				num = num / prime;
				num_check = num_check * prime;
				printf("%d", prime);
				if (num_check != number)
					printf("*");
			}
			else
				prime++;
		}
		else
			prime++;
	}
	printf("\n");
	return (0);
}