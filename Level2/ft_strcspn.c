#include <string.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t z = 0;

	if (!s[0])
		return (0);
	if (!reject[0])
	{
		while (s[i])
			i++;
		return (i);
	}
	i = 0;
	while (s[i])
	{
		z = 0;
		while (reject[z])
		{
			if (s[i] == reject[z])
				return (i);
			else
				z++;
		}
		i++;
	}
	return (i);
}

int main(void)
{
	char *s = NULL;
	char reject[] = "mimimi";

	printf("%ld\n", strcspn(s, reject));
	printf("%ld\n", ft_strcspn(s, reject));
}