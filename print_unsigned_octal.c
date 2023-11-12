#include "main.h"

/**
 * print_unsigned_octal - a function that prints unsigned octal of a decimal
 * @args: variable number of arguments
 * @buffer_index: the buffer index
 * @buffer: the buffer
 * Return: the number of char printed
 */

int print_unsigned_octal(va_list args, int *buffer_index, char buffer[])
{
	int i, j;
	unsigned int octal;
	int octalNumber[100];

	octal = va_arg(args, unsigned int);

	/*convert unsigned int to octal*/
	while (octal > 0)
	{
		octalNumber[i] = octal % 8;
		octal /= 8;
		i++;
	}

	/*insert octal digits as characters*/
	for (j = i - 1; j >= 0; j--)
	{
		buffer_insert('0' + octalNumber[j], buffer_index, buffer);
	}

	return (i);
}
