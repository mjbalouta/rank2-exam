#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int size = 0;
	int i = end;
	int back = 0;
	int *ptr;
	int z = 0;

	if (end > start)
	{
		size = (end - start) + 1;
		back = 1;
	}
	if (end < start)
	{
		size = (start - end) + 1;
	}
	ptr = malloc(sizeof(int) * size);
	if (!ptr)
		return (0);
	if (back == 0)
	{
		while (i <= start)
		{
			ptr[z] = i;
			i++;
			z++;
		}
	}
	if (back == 1)
	{	
		while (i >= start)
		{
			ptr[z] = i;
			i--;
			z++;
		}
	}
	return (ptr);	
}

#include <stdio.h>
int main(void)
{
	int *result = ft_rrange(-5, 10);
	int i = 0;
	while (i < 16)
	{
		printf("%d\n", result[i]);
		i++;
	}
	free(result);
}