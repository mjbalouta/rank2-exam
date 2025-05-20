#include <stdlib.h>
#include <unistd.h>

int main( int argc, char **argv)
{
	int i = 0;
	char *ptr;
	int z = 0;
	int count_ups = 0;
	if (argc != 2)
		return (write(1, "\n", 1));
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			count_ups++;
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (i + count_ups + 1));
	if (!ptr)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == '_')
		{
			ptr[z]= argv[1][i + 1] - 32;
			i++;
			i++;
			z++;
		}
		else
		{
			ptr[z] = argv[1][i];
			i++;
			z++;
		}
	}
	ptr[z] = '\0';
	z = 0;
	while (ptr[z])
		write(1, &ptr[z++], 1);
	write(1, "\n", 1);
	return (0);
}