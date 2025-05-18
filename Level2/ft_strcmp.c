int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
#include <stdio.h>
int main(void)
{
	char s1[] = "ABJ";
	char s2[] = "ABC";
	printf("%d\n", ft_strcmp(s1, s2));
}

// $ ./string_comp ABC ABC
// <str1> and <str2> are equal
// $ ./string_comp ABC AB      # 'C' is ASCII 67; 'C' - '\0' = 67
// <str1> is greater than <str2> (67)
// $ ./string_comp ABA ABZ     # 'A' is ASCII 65; 'Z' is ASCII 90
// <str1> is less than <str2> (-25)
// $ ./string_comp ABJ ABC
// <str1> is greater than <str2> (7)
// $ ./string_comp $'\201' A   # 0201 - 0101 = 0100 (or 64 decimal)
// <str1> is greater than <str2> (64)