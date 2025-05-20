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

int main(int ac, char **av)
{
	if (ac != 2 || av[0] == '-')
		return (write(1, "0\n", 2));
	int num = ft_atoi(av[1]);
	int i = num;
	int count_div = 0;

	while (num > 0)
	{
		if (num % i == 0)
			count_div++;
	}
	
}