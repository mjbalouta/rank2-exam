unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (!a || !b)
		return (0);
	int i = 1;
	int j = 1;
	unsigned int res1 = 0;
	unsigned int res2 = 1;
	while (res1 != res2)
	{
		res1 = a * i;
		res2 = b * j;
		if (res1 < res2)
			i++;
		if (res1 > res2)
			j++;
	}
	return (res1);
}
#include <stdio.h>
int main(void)
{
	int result = lcm(1237, 2027);
	printf("%d\n", result);

}