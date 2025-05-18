void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>
int main(void)
{
	// int *ptr1;
	// int *ptr2;
	int a = 10;
	int b = 20;

	// ptr1 = &a;
	// ptr2 = &b;
	printf("%d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d, %d\n", a, b);
}