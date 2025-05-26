#include <unistd.h>

int main(int ac, char **av)
{
	if (ac < 2)
		return (write(1, "\n", 1));
	int i = 0;
	int first_word = 0;

	while (av[1][i] && first_word == 0)
	{
		if ((av[1][i] == ' ' || av[1][i] == '\t') && first_word == 0)
			i++;
		if (!(av[1][i] == ' ' || av[1][i] == '\t'))
		{
			first_word = 1;
			while (av[1][i] && (!(av[1][i] == ' ' || av[1][i] == '\t')))
				i++;
			while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
				i++;
		}
	}
	while (av[1][i] && first_word == 1)
	{
		while (av[1][i] && (!(av[1][i] == ' ' || av[1][i] == '\t')))
			write (1, &av[1][i++], 1);
		write(1, " ", 1);
		if (av[1][i] == ' ' || av[1][i] == '\t')
		{
			while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
				i++;
		}
	}
	i = 0;
	while (av[1][i] && first_word == 1)
	{
		if ((av[1][i] == ' ' || av[1][i] == '\t') && first_word == 0)
			i++;
		if (!(av[1][i] == ' ' || av[1][i] == '\t'))
		{
			first_word = 0;
			while (av[1][i] && (!(av[1][i] == ' ' || av[1][i] == '\t')))
				write(1, &av[1][i++], 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
