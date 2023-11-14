#include "main.h"

/**
 * print_unsigned_int - prints the digits of an unsigned int
 * using the specifier %u
 * @args: the variable number of argumets
 * @buffer: the buffer
 * @buffer_index: the buffer index
 * Return: the number of digits printed
 */

int print_unsigned_int(va_list args, int *buffer_index, char buffer[])
{
	int len = 1, digits, i;
	unsigned int highest, num;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		buffer_insert('0', buffer_index, buffer);
		return (1);
	}
	else if (num == UINT_MAX)
	{
		char Max[] = "4294967295";

		for (i = 0; i < 10; i++)
		{
			buffer_insert(Max[i], buffer_index, buffer);
		}
		return (10);
	}

	/*count length of number*/
	len = _numlen(num);

	highest = _pow(10, len - 1);
	while (highest > 0)
	{
		digits = (num / highest) % 10;
		buffer_insert(digits + '0', buffer_index, buffer);
		highest /= 10;
	}

	return (len);
}
