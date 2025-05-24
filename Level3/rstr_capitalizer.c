#include <unistd.h>

int main(int ac, char **av)
{
	int j = 1;
	int i = 0;
	int size = 0;
	int limit = 1;

	if (ac < 3)
		return (write(1, "\n", 1));
	while (av[j])
	{
		size = 0;
		while (av[j][size])
			size++;
		i = size - 1;
		limit = 1;
		while (i >= 0)
		{
			if (!(av[j][i] == '\t' || av[j][i] == ' ') && limit == 1)
			{
				if (av[j][i] >= 'a' && av[j][i] <= 'z')
					av[j][i] -= 32;
				i--;
			}
			else if (!(av[j][i] == '\t' || av[j][i] == ' ') && limit == 0)
			{
				if (av[j][i] >= 'A' && av[j][i] <= 'Z')
					av[j][i] += 32;
				i--;
			}
			limit = 0;
			if (av[j][i] == '\t' || av[j][i] == ' ')
			{
				limit = 1;
				i--;
			}
		}
		i = 0;
		while (av[j][i])
			write(1, &av[j][i++], 1);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
