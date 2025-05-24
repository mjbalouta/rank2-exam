#include <unistd.h>

int main(int ac, char **av)
{
	(void)ac;
	int i = 0;
	int j = 1;
	int limit = 1;

	if (ac < 3)
		return (write(1, "\n", 1));
	while (av[j])
	{
		i = 0;
		limit = 1;
		while (av[j][i])
		{
			if (!(av[j][i] == '\t' || av[j][i] == ' ') && limit == 1)
			{
				if (av[j][i] >= 'a' && av[j][i] <= 'z')
					av[j][i] -= 32;
				write(1, &av[j][i], 1);
				i++;
			}
			else if (!(av[j][i] == '\t' || av[j][i] == ' ') && limit == 0)
			{
				if (av[j][i] >= 'A' && av[j][i] <= 'Z')
					av[j][i] += 32;
				write(1, &av[j][i], 1);
				i++;
			}
			limit = 0;
			if (av[j][i] == '\t' || av[j][i] == ' ')
			{
				limit = 1;
				write(1, &av[j][i], 1);
				i++;
			}
		}
		write (1, "\n", 1);
		j++;
	}
}
