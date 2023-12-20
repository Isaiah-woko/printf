#include "main.h"

/**
* _numlen_1 - count the number of digits in a number
* @num: The number
* Return: the digit length
*/
int _numlen_1(unsigned long int num)
{
	int count = 1;

	while (num /= 10)
		count++;
	return (count);
}
/**
* _pow_1 - (`num` to the power `power`)
* @num: the number
* @power: the power
* Return: pow(num, power)
*/
unsigned long  int _pow_1(unsigned long  int num, int power)
{
	unsigned long int result = 1;

	while (power > 0)
	{
		result *= num;
		power--;
	}

	return (result);
}

