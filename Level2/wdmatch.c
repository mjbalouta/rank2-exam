#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "\n", 1));
	int i = 0;
	int j = 0;
	int count = 0;
	int size = 0;
	while (argv[1][size])
		size++;
	while (argv[1][i])
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				count++;
				j++;
				i++;
			}
			else
				j++;
		}
		i++;
	}
	i = 0;
	if (count == size)
	{
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}