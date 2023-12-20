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

/**
* _pow - (`num` to the power `power`)
* @num: the number
* @power: the power
* Return: pow(num, power)
*/
long int _pow(int num, int power)
{
	long int result = 1;

	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= num;
		power--;
	}

	return (result);
}



/**
* buffer_insert - insert a character to the buffer if the buffer
* is full print it by calling buffer_index();
* @character: the character to insert
* @buffer_index: the buffer index
* @buffer: the buffer
*/
void buffer_insert(char character, int *buffer_index, char buffer[])
{
	if (*buffer_index >= 1024)
	{
		buffer_print(buffer_index, buffer);
	}
	buffer[*buffer_index] = character;
	*buffer_index += 1;
}
/**
* buffer_print - print the buffer when this function called
* @buffer_index: the buffer index
* @buffer: the buffer
*/
void buffer_print(int *buffer_index, char buffer[])
{
	int j = 0;

	while (j < *buffer_index)
	{
		write(1, &buffer[j], 1);
		j++;
	}
	*buffer_index = 0;
}
