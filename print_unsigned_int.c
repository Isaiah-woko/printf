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

	unsigned long int highest, num, res;

	num = va_arg(args, unsigned long int);

	if (num == 0)
	{
		buffer_insert('0', buffer_index, buffer);
		return (1);
	}
	if (num > ULONG_MAX)
	{
		num = ULONG_MAX - (ULONG_MAX - num) + 1;
	}

	/*count length of number*/
	len = _numlen_1(num);
	highest = _pow_1(10, len - 1);
	while (highest > 0)
	{
		res = (num / highest);
		digits = res % 10;
		buffer_insert(digits + '0', buffer_index, buffer);
		highest /= 10;
	}

	return (len);
}
