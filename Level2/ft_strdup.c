#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *ptr;

	while (src[i])
		i++;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

#include <stdio.h>
int main(void)
{
	char src[] = "maria";
	printf("%s\n", ft_strdup(src));
	return (0);
}