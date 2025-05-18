#include "do_op.h"

int main(int argc, char **argv)
{
	if (argc != 4)
		return (write(1, "\n", 1));
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result = 0;
	if (argv[2][0] == '+')
		result = num1 + num2;
	else if (argv[2][0] == '-')
		result = num1 - num2;
	else if (argv[2][0] == '*')
		result = num1 * num2;
	else if (argv[2][0] == '/')
		result = num1 / num2;
	else if (argv[2][0] == '%')
		result = num1 % num2;
	printf("%d\n", result);
	return (0);
}


