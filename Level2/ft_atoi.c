#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int	num = 0;
	int is_negative = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');  
		i++;
	}
	if (is_negative == 1)
		return (-num);
	return (num);
}

int main(void)
{
	char str[] = "+214748364";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}