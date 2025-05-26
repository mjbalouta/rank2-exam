#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 2)
		return (write(1, "\n", 1));
	int i = 0;
	int position = 0;
	while (av[1][i])
		i++;
	i = i - 1;
	while (i >= 0)
	{
		if (av[1][i] == ' ' || i == 0)
		{
			if (i != 0)
				position = i + 1;
			if (i == 0)
				position = i;
			while (av[1][position] != ' ' && av[1][position])
				write (1, &av[1][position++], 1);
			if (i != 0)
				write (1, " ", 1);
		}
		i--;
	}
	write(1, "\n", 1);
	return (0);
}