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
	int len = 1, digits;
	unsigned int num, highest;

	num = va_arg(args, unsigned int);

	/*count length of number*/
	len = _numlen(num);

	highest = _pow(10, len - 1);
	while (highest > 0)
	{
		digit = (num / highest) % 10;
		buffer_insert(digit + '0', buffer_index, buffer);
		highest /= 10;
	}

	return (len);
}