#include <stdlib.h>
#include <stdio.h>

int count_words(char *str)
{
	int i = 0;
	int limit = 1;
	int count = 0;

	while (str[i])
	{
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && limit == 1)
			count++;
		limit = 0;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			limit = 1;
		i++;
	}
	return (count);

}

char **ft_split(char *str)
{
	int i = 0;
	char **ptr;
	int size = 0;
	int j = 0;
	int position = 0;
	int z = 0;

	i = count_words(str);
	ptr = (char **)malloc(sizeof(char *) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	i = 0;
	while (str[i])
	{
		size = 0;
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			position = i;
			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			{
				size++;
				i++;
			}
		}
		ptr[j] = (char *)malloc(sizeof(char) * (size + 1));
		if (!ptr[j])
			return (NULL);
		ptr[j][size] = '\0';
		z = 0;
		while (position < i)
			ptr[j][z++] = str[position++];
		j++;
		i++;
	}
	return (ptr);
}
int main(void)
{
	char str[] = "a .maria , estuda ";
	char **result = ft_split(str);
	int i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}