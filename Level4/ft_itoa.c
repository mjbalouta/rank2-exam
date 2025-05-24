#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char	*ft_itoa(int nbr)
{
	long num = nbr;
	int size = 0;
	char *ptr;
	int is_negative = 0;

	if (num == 0)
	{
		ptr = (char *)malloc(sizeof(char) * (1 + 1));
		if (!ptr)
			return (NULL);
		ptr[0] = '0';
		return (ptr);
	}
	else if (num < 0)
	{
		num *= -1;
		size++;
		is_negative = 1;
	}
	while (num > 0)
	{
		num = num / 10;
		size++;
	}
	if (is_negative == 0)
	{
		ptr = (char *)malloc(sizeof(char) * (size + 1));
		num = nbr;
	}
	if (is_negative == 1)
	{
		ptr = (char *)malloc(sizeof(char) * (size + 1));
		ptr[0] = '-';
		num = nbr;
		num *= -1;
	}
	size = size - 1;
	if (!ptr)
		return (NULL);	
	while (num > 0)
	{
		ptr[size] = (num % 10) + '0';
		num = num / 10;
		size--;
	}
	return (ptr);	
}

int main(void)
{
	char *result = ft_itoa(INT_MIN);
	printf("%d\n", INT_MIN);
	printf("%s\n", result);
	free(result);
}