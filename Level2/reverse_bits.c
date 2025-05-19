#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char rev;
	int i = 8;

	while (i--)
	{
		rev <<= 1;
		rev |= (octet & 1);
		octet >>= 1;
	}
	return (rev);
}