#include <stdio.h>
unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (!a || !b)
		return (0);
	int i = 1;
	int j = 1;
	unsigned int res1 = 0;
	unsigned int res2 = 1;
	int num1 = a;
	int num2 = b;
	if (num1 < 0)
		num1 *= -1;
	if (num2 < 0)
		num2 *= -1;
	while (res1 != res2)
	{
		res1 = num1 * i;
		res2 = num2 * j;
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
	int result = lcm(-1, 2932);
	printf("%d\n", result);

}
