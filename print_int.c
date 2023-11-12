#include "main.h"
/**
* print_int - print the digit the specifier %d or %i
* @args: the argument passed
* Return: number of digit printed
*/
int print_int(va_list args)
{
	int len = 1, sign = 0, i;
	long int tempnum, num;
	char *str;

	/*Read the number*/
	tempnum = va_arg(args, int);
	/*if number is neg print the symbol '-'*/
	if (tempnum < 0)
	{
		_putchar('-');
		tempnum = -tempnum;
		sign = 1;
	}
	num = (long int) tempnum;

	/*count the number length*/
	len = _numlen(num);
	str = malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len; i++)
	{
		str[i] = num % 10 + '0';
		num /= 10;
	}
	str[i] = '\0';
	len = len - 1;
	while (len > -1)
	{
		_putchar(str[len]);
		len--;
	}
	free(str);
	return (len + sign);
}
