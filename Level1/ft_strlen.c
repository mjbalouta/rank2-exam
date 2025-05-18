int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
int	main(void)
{
	char str[] = "maria joao";
	int result = ft_strlen(str);
	printf("%d", result);
}