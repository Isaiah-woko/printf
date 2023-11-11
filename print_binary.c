#include "main.h"
/**
* print_binary - print int in binary `%b`
* @args: the argument passed
* Return: number of character printed
* from 0 - 1000000
*/
int print_binary(va_list args)
{
	int value;
	int count = 0, size, j;

	value = va_arg(args, int);

	size = 8 * sizeof(value);
	for (j = size - 1; j >= 0; j--)
	{
		if ((value >> j) == 0)
			continue;
		_putchar((value >> j & 1) + '0');
		count++;
	}
	if (value == 0)
		_putchar('0');

	return (count);
}
