#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index = 0;
	int i = 0;

	if (argc != 2)
		return (write(1, "\n", 1));
	while (argv[1][i])
	{
		index = 0;
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z'))
				index = argv[1][i] - 'a' + 1;
			else if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				index = argv[1][i] - 'A' + 1;
			while (index > 0)
			{
				write (1, &argv[1][i], 1);
				index--;
			}
		}
		else
			write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}