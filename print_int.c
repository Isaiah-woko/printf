#include "main.h"
/**
* print_int - print the digit the specifier %d or %i
* @args: the argument passed
* Return: number of digit printed
*/
int print_int(va_list args)
{
	int len = 1, digit, sign = 0;

	long int num, check;

	long int tempnum;

	/* Read the number */
	tempnum = va_arg(args, int);
	/* If the number is negative, print the symbol '-' */
	if (tempnum < 0)
	{
		_putchar('-');
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
		_putchar(digit + '0');
		check /= 10;
	}

	return (len + sign);
}
