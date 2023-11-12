#include "main.h"
/**
* print_int - print the digit the specifier %d or %i
* @buffer_index: the buffer index
* @buffer: the buffer
* @args: the argument passed
* Return: number of digit printed
*/
int print_int(va_list args, int *buffer_index, char buffer[])
{
	int len = 1, digit, sign = 0;

	long int num, check;

	long int tempnum;

	/* Read the number */
	tempnum = va_arg(args, int);
	/* If the number is negative, print the symbol '-' */
	if (tempnum < 0)
	{
		buffer_insert('-', buffer_index, buffer);
		tempnum = -tempnum;
		sign = 1;
	}

	num = (long int)tempnum;

	/* Count the number length */
	len = _numlen(num);
	check = _pow(10, len);
	check /= 10;
	while (check > 0)
	{
		digit = (num / check) % 10;
		buffer_insert(digit + '0', buffer_index, buffer);
		check /= 10;
	}

	return (len + sign);
}
