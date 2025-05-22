#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int size = 0;
	int *ptr;
	int i = start;
	int z = 0;
	int back = 0;

	if (start < end)
		size = (end - start) + 1;
	if (start > end)
	{
		size = (start - end) + 1;
		back = 1;
	}
	ptr = (int *)malloc(sizeof(int) * size);
	if (!ptr)
		return (0);
	if (back == 0)
	{
		while (i <= end)
		{
			ptr[z] = i;
			i++;
			z++;
		}
	}
	else if (back == 1)
	{
		while (i >= end)
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
	int *result = ft_range(-3, -10);
	int i = 0;
	while (i < 8)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
	free(result);
}