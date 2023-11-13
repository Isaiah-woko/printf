#include "main.h"

/**
 * print_unsigned_hexa - a function that prints the %x specifier
 * @args: a variable number of arguments passed
 * @buffer_index: the buffer index
 * @buffer: the buffer
 * Return: the number of characters printed
 */

int print_unsigned_hexa(va_list args, int *buffer_index, char buffer[])
{
	int i = 0, j;
	unsigned int hexa;
	int rem, count = 0;
	char hexaNum[100];

	hexa = va_arg(args, unsigned int);

	if (hexa == 0)
	{
		buffer_insert('0', buffer_index, buffer);
	}

	while (hexa != 0)
	{
		rem = hexa % 16;

		if (rem < 10)
		{
			hexaNum[i] = rem + 48;
		}
		else
		{
			hexaNum[i] = rem + 87;
		}
		hexa /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		buffer_insert(hexaNum[j], buffer_index, buffer);
		count++;
	}

	return (count);
}
