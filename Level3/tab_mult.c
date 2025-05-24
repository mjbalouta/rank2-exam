#include <unistd.h>

int ft_atoi(char *str)
{
	int num = 0;
	int i = 0;

	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	return (num);
}

void putnbr(int num)
{
	int i = 0;
	char res[10];

	if (num == 0)
		write (1, "0", 1);
	while (num > 0)
	{
		res[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write (1, &res[i], 1);
		i--;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (write(1, "\n", 1));

	int num = ft_atoi(av[1]);
	int i = 1;
	int result = 0;

	while (i <= 9)
	{
		putnbr(i);
		write (1, " x ", 3);
		putnbr(num);
		write (1, " = ", 3);
		result = i * num;
		putnbr(result);
		write (1, "\n", 1);
		i++;
	}
}