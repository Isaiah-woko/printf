#include "main.h"
/**
* print_binary - print int in binary `%b`
* @args: the argument passed
* Return: number of character printed
* from 0 - 1000000
*/
int print_binary(va_list args)
{
	unsigned int value;

	int count = 0;

	int size, j;

	int leading_zeros = 1;

	value = va_arg(args, int);

	size = 8 * sizeof(value);
	for (j = size - 1; j >= 0; j--)
	{
		if (value & (1u << j))
		{
			_putchar('1');
			leading_zeros = 0;
			count++;
		}
		else if (!leading_zeros || j == 0)
		{
			_putchar('0');
			count++;
		}
	}

	return (count);
}
