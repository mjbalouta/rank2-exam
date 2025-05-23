#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	char result[10];
	if (ac < 1)
		return (write(1, "\n", 1));
	(void)av;
	int i = 0;
	ac = ac - 1;
	printf("%d\n", ac);
	while (ac > 0)
	{
		result[i] = (ac % 10) + '0';
		ac = ac / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
		write(1, &result[i--], 1);
	write (1, "\n", 1);
	return (0);
}