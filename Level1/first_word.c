#include <unistd.h>

int	main(int argc, char **argv)
{
	int 	i;
	int		limit;

	i = 0;
	limit = 0;
	if (argc != 2)
		return (write(1, "\n", 1));
	while (argv[1][i])
	{
		limit = 1;
		if (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			limit = 1;
			i++;
		}
		if (limit == 1 && !(argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			while (argv[1][i] != '\0' && !(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				write (1, &argv[1][i], 1);
				i++;
			}
			return (write(1, "\n", 1));
		}
	}
}