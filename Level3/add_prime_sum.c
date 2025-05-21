#include <unistd.h>

int	ft_atoi(char *nbr)
{
	int i = 0;
	int num = 0;

	while (nbr[i])
	{
		num = num * 10;
		num = num + (nbr[i] - '0');
		i++; 
	}
	return (num);
}

void putnbr(int num)
{
	char nr[10];
	int i = 0;

	if (num == 0)
		write(1, "0", 1);
	while (num > 0)
	{
		nr[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(1, &nr[i], 1);
		i--;
	}
}

int main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '-')
		return (write(1, "0\n", 2));
	int num = ft_atoi(av[1]);
	int i = num;
	int count_div = 0;
	int sum = 0;

	while (num > 0)
	{
		i = num;
		count_div = 0;
		while (i > 0)
		{
			if (num % i == 0)
				count_div++;
			i--;
		}
		if (count_div == 2)
		{
			sum = sum + num;
		}
		num--;
	}
	putnbr(sum);
	write (1, "\n", 1);
	return (0);
}