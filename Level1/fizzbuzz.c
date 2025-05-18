#include <unistd.h>

void	ft_putnbr(int i)
{
	char	nbr[3];
	int 	j = 0;

	while (i > 0)
	{
		nbr[j] = (i % 10) + '0';
		i = i / 10;
		j++;
	}
	j = j - 1;
	while (j >= 0)
	{
		write (1, &nbr[j], 1);
		j--;
	}
}

int	main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(i);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}