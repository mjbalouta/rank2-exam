int validate_str(const char *str)
{
	int i = 0;
	char base_l[16] = "0123456789abcdef";
	char base_u[16] = "0123456789ABCDEF";
	int z = 0;
	int match = 0;

	while (str[i])
	{
		z = 0;
		while (base_l[z])
		{
			if (str[i] == base_l[z])
				match = 1;
			z++;
		}
		z = 0;
		while (base_u[z] && match == 0)
		{
			if (str[i] == base_l[z])
				match = 1;
			z++;
		}
		if (match == 0)
			return (1);
	}
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int num = 0;
	int sign = 1;

	if (validate_str == 1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * str_base;
			num = num + (str[i] - '0');
			i++;
		}
		if (str[i] >= 'a' && str[i] >= 'f')
	}

}

int main(void)
{
	int result = ft_atoi_base("123", 10);
	printf("%d\n", result);
}