#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc != 2)
		return (write(1, "\n", 1));
	while (argv[1][i])
		i++;
	i = i - 1;
	while (i >= 0)
	{
		write (1, &argv[1][i], 1);
		i--;
	}
	write (1, "\n", 1);
}