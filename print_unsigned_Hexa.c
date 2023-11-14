#include "main.h"

/**
 * print_unsigned_Hexa - a function that formats %X
 * @args: the variable number of arguments
 * @buffer_index: the buffer index
 * @buffer: the buffer
 * Return: the number of characters printed
 */

int print_unsigned_Hexa(va_list args, int *buffer_index, char buffer[])
{
	int i = 0, j, count = 0, rem;
	unsigned int Hexa;
	char HexaNum[100];

	Hexa = va_arg(args, unsigned int);

	if (Hexa == 0)
	{
		buffer_insert('0', buffer_index, buffer);
		count++;
	}

	while (Hexa != 0)
	{
		rem = Hexa % 16;

		if (rem < 10)
		{
			HexaNum[i] = rem + 48;
		}
		else
		{
			HexaNum[i] = rem + 55;
		}
		Hexa /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		buffer_insert(HexaNum[j], buffer_index, buffer);
		count++;
	}

	return (count);
}
