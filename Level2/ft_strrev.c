#include <stdio.h>

char *ft_strrev(char *str)
{
	int i = 0;
	int z = 0;
	char temp;

	while (str[i])
		i++;
	while (--i > z)
	{
		temp = str[z];
		str[z] = str[i];
		str[i] = temp;
		z++;
	}
	return (str);
}

int main(void)
{
	char str[] = "ru";
	printf("%s\n", ft_strrev(str));
	return (0);
}