#include "main.h"
/**
* print_binary - print int in binary `%b`
* @args: the argument passed
* @buffer_index: the buffer index
* @buffer: the buffer
* Return: number of character printed
* from 0 - 1000000
*/
int print_binary(va_list args, int *buffer_index, char buffer[])
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
			buffer_insert('1', buffer_index, buffer);
			leading_zeros = 0;
			count++;
		}
		else if (!leading_zeros || j == 0)
		{
			buffer_insert('0', buffer_index, buffer);
			count++;
		}
	}

	return (count);
}
