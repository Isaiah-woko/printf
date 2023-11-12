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
int _numlen(int num)
{
	int count = 1;

	if (num < 0)
		num *= -1;
	while (num /= 10)
		count++;
	return (count);
}
