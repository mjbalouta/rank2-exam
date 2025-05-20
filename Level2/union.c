#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 3)
		return (write(1, "\n", 1));
	int i = 0;
	char letters[256] = {0};
	while (av[1][i])
	{
		if (letters[(int)av[1][i]] == 0)
		{
			write(1, &av[1][i], 1);
			letters[(int)av[1][i]] = 1;
		}
		i++;
	}
	i = 0;
	while (av[2][i])
	{
		if (letters[(int)av[2][i]] == 0)
		{
			write(1, &av[2][i], 1);
			letters[(int)av[2][i]] = 1;
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}