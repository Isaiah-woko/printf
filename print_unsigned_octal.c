#include "main.h"
#include <stdlib.h>

/**
* print_unsigned_octal - prints the unsigned octal representation of a decimal
* @args: variable number of arguments
* @buffer_index: the buffer index
* @buffer: the buffer
* Return: the number of characters printed
*/
int print_unsigned_octal(va_list args, int *buffer_index, char buffer[])
{
	int i = 0, j;
	unsigned int octal, temp;
	int *octalNumber;
	int count = 0;

	octal = va_arg(args, unsigned int);

	if (octal == 0)
	{
		buffer_insert('0', buffer_index, buffer);
		return (1);
	}
	temp = octal;

	while (temp > 0)
	{
		temp /= 8;
		i++;
	}

	octalNumber = malloc(i * sizeof(int));
	if (octalNumber == NULL)
	{
		return (0);
	}
	i = 0;
	while (octal > 0)
	{
		octalNumber[i] = octal % 8;
		octal /= 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		buffer_insert('0' + octalNumber[j], buffer_index, buffer);
		count++;
	}
	free(octalNumber);
	return (count);
}
