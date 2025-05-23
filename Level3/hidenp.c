#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 3)
		return (write (1, "\n", 1));
	int i = 0;
	int j = 0;
	int count = 0;
	int size = 0;
	while (av[1][size])
		size++;
	while (av[1][i])
	{
		while (av[2][j])
		{
			if (av[1][i] == av[2][j] && av[1][i])
			{
				count++;
				i++;
			}
			j++;
		}
		i++;
	}
	if (count == size)
		return(write(1, "1\n", 2));
	return(write(1, "0\n", 2));
}