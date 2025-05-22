#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int position = 0;
	int z = 0;
	int not_end = 0;

	if (ac != 2 || !av[1])
		return (write(1, "\n", 1));
	while (av[1][i])
	{
		not_end = 0;
		if ((av[1][i] == '\t' || av[1][i] == ' '))
		{
			position = i;
			while (av[1][i])
			{
				av[1][i] = av[1][i + 1];
				i++;
			}
			i = position;
		}
		if (!(av[1][i] == '\t' || av[1][i] == ' ') && av[1][i])
		{
			while ((!(av[1][i] == '\t' || av[1][i] == ' ')) && av[1][i])
				write(1, &av[1][i++], 1);
			z = i;
			while (av[1][z] && not_end == 0)
			{
				if (!(av[1][z] == '\t' || av[1][z] == ' '))
					not_end = 1;
				z++;
			}
			if ((av[1][i] == '\t' || av[1][i] == ' ') && not_end == 1)
				write(1, " ", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
