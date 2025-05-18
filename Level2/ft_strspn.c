#include <string.h>
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t z = 0;
	size_t count = 0;
	int match = 0;

	if (!s[i] || !accept[i])
		return (0);
	while (s[i])
	{
		z = 0;
		match = 0;
		while (accept[z] && s[i])
		{
			if (s[i] == accept[z])
			{
				count++;
				match = 1;
				i++;
			}
			z++;
		}
		if (match == 0)
			return (count);
		i++;
	}
	return (count);
}

int main(void)
{
	char s[] = "maria";
	char accept[] = "mari";
	printf("%ld\n", ft_strspn(s, accept));
	printf("%ld\n", strspn(s, accept));
}