#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i = 0;
	int count_up = 0;
	char *str;
	int z = 0;

	if (argc != 2)
		return (write(1, "\n", 1));
	
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			count_up++;
		i++;
	}
	str = (char *)malloc(sizeof(char) * (i + count_up + 1));
	if (!str)
		return (1);
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			str[z] = '_';
			z++;
			str[z] = argv[1][i] + 32;
		}
		else
			str[z] = argv[1][i];
		z++;
		i++;
	}
	str[z] = '\0';
	z = 0;
	while (str[z])
	{
		write (1, &str[z], 1);
		z++;
	}
	write (1, "\n", 1);
	free(str);
	return (0);
}