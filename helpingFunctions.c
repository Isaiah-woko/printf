#include "main.h"

/**
* _putchar - print a character to the stdout
* @c: the character
*/
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
* _numlen - count the number of digits in a number
* @num: The number
* Return: the digit length
*/
int _numlen(unsigned int num)
{
	int count = 1;
	int numcp;

	numcp = num;
	if (numcp < 0)
		numcp *= -1;
	while (numcp /= 10)
		count++;
	return (count);
}

/**
* _pow - (`num` to the power `power`)
* @num: the number
* @power: the power
* Return: pow(num, power)
*/
int _pow(unsigned int num, int power)
{
	unsigned int result = num;

	while (--power)
	{
		result *= num;
	}
	return (result);
}
