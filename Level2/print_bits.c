#include <unistd.h>

// void print_bits(unsigned char octet)
// {
// 	int i = 8;
// 	unsigned char bit;

// 	while (i--)
// 	{
// 		bit = (octet >> i & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// }


void print_bits(unsigned char octet)
{
	unsigned char bit;
	int i = 8;

	while (i-- > 0)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit, 1);
	}
}

int main(void)
{
	print_bits(2);
	return (0);
}