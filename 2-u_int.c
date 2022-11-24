#include "main.h"

/**
*print_b - handles b conversion specifier
*@b: unsidned in arg
*Return: arg count
*/

int print_b(va_list b)
{
	unsigned int i, j, k, sum;
	unsigned int is[32];
	int count;

	k = va_arg(b, unsigned int);
	j = 2147483648;
	is[0] = k / j;
	for (i = 1; i < 32; i++)
	{
		j /= 2;
		is[i] = (k / j) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += is[i];
		if (sum || i == 31)
		{
			_putchar('0' + is[i]);
			count++;
		}
	}
	return (count);
}
