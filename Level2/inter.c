#include <unistd.h>

int main(int argc, char **argv)
{
	char letter[256] = {0};
	int i = 0;

	if (argc != 3)
		return (write(1, "\n", 1));

	while (argv[2][i])
	{
		if (letter[(int)argv[2][i]] == 0)
		{
			letter[(int)argv[2][i]] = 1;
		}
		i++;
	}
	i = 0;
	while (argv[1][i])
	{
		if (letter[(int)argv[1][i]] == 1)
		{
			letter[(int)argv[1][i]] = 0;
			write (1, &argv[1][i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

// while (argv[1][i])
	// {
	// 	if (letter[(int)argv[1][i]] == 0)
	// 	{
	// 		letter[(int)argv[1][i]] = 1;
	// 	}
	// 	i++;
	// }
	// i = 0;
	// while (argv[2][i])
	// {
	// 	if (letter[(int)argv[2][i]] == 1)
	// 	{
	// 		letter[(int)argv[2][i]] = 0;
	// 		write (1, &argv[2][i], 1);
	// 	}
	// 	i++;
	// }