#include <unistd.h>

int ft_atoi(char *nr)
{
	int i = 0;
	int num = 0;

	while (nr[i] >= '0' && nr[i] <= '9')
	{
		num = num * 10;
		num = num + (nr[i] - '0');
		i++;
	}
	return (num);
}

int main(int ac, char **av)
{
	char base[] = "0123456789abcdef";
	int num;
	char nr[10];
	int i = 0;

	if (ac != 2)
		return (write(1, "\n", 1));
	if (av[1][0] == '0' && !av[1][1])
		return (write(1, "0\n", 2));
	num = ft_atoi(av[1]);
	while (num > 0)
	{
		nr[i] = base[(num % 16)];
		num = num / 16;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write (1, &nr[i], 1);
		i--;
	}
	write (1, "\n", 1);
	return (0);
}