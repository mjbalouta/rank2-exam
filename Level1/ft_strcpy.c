char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>
int main(void)
{
	char src[] = "maria";
	char dest[20] = "";
	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
