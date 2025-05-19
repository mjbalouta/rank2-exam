#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	int limit = 1;
	int position = 0;

	if (argc != 2)
		return (write(1, "\n", 1));

	while (argv[1][i])
	{
		if (limit == 1 && !(argv[1][i] == ' ' || argv[1][i] == 9))
		{
			position = i;
		}
		limit = 0;
		if (argv[1][i] == ' ' || argv[1][i] == 9)
			limit = 1;
		i++;
	}
	i = 0;
	while (argv[1][position])
		write (1, &argv[1][position++], 1);
	write (1, "\n", 1);
	return (0);
}