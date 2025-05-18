#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int z = 0;
	char *ptr1 = (char *)s1;
	char *ptr2 = (char *)s2;

	if (!s1[0])
		return (NULL);
	// if (!s2[0])
	// 	return (ptr1);
	while (ptr1[i])
	{
		z = 0;
		while (ptr2[z])
		{
			if (ptr1[i] == ptr2[z])
			{
				ptr1 = ptr1 + i;
				return (ptr1);
			}
			z++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char s1[] = "";
	char s2[] = "maria";
	printf("%s\n", ft_strpbrk(s1, s2));
	printf("%s\n", strpbrk(s1, s2));
	return (0);
}