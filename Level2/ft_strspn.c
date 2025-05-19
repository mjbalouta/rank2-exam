#include <string.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t z = 0;
	size_t count = 0;
	int match = 0;
	size_t size = 0;

	if (!s[i] || !accept[i])
		return (0);
	while (accept[size])
		size++;
	while (s[i])
	{
		z = 0;
		match = 0;
		while (accept[z] && s[i] && match == 0)
		{
			if (s[i] == accept[z])
			{
				count++;
				match = 1;
			}
			if (z == (size - 1) && match == 0)
				return (count);
			z++;
		}
		i++;
	}
	return (count);
}

int main(void)
{
	char s[] = "jmoaria joao";
	char *accept = "mariaj";
	printf("%ld\n", ft_strspn(s, accept));
	printf("%ld\n", strspn(s, accept));
}