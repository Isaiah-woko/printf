#include "main.h"
/**
* print_binary - print unsigned int in binary `%b`
* @args: the argument passed
* Return: number of character printed
*/
int print_binary(va_list args)
{
	unsigned int value;
	int count = 0, size, j;

	value = va_arg(args, unsigned int);

	size = 8 * sizeof(value);
	for (j = size - 1; j >= 0; j--)
	{
		if ((value >> j) == 0)
			continue;
		_putchar((value >> j & 1) + '0');
		count++;
	}

	return (count);
}
