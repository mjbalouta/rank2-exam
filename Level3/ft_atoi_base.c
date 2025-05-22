int convert_char(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;
	int value = 0;
	int result = 0;

	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		value = convert_char(str[i]);
		if (value < 0 || value >= str_base)
			return (result * sign);
		result = result * str_base + value;
		i++;
	}
	return (result * sign);
}
#include <stdio.h>
int main(void)
{
	int result = ft_atoi_base("-123a", 1);
	printf("%d\n", result);
}