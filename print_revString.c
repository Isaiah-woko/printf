#include "main.h"


/**
 * print_revStr - a custom format spcifier to print string in reverse
 * @args: variable number of arguments
 * @buffer_index: the buffer index
 * @buffer: the buffer
 * Return: nummber of characters printe
 */

int print_revStr(va_list args, int *buffer_index, char buffer[])
{
	int i, count = 0;
	char *revString;
	int length;

	revString = va_arg(args, char*);

	if (revString == NULL)
	{
		const char *null = "(null)";

		for (i = 0; null[i] != '\0'; i++)
		{
			buffer_insert(null[i], buffer_index, buffer);
			count++;
		}
	}
	else
	{
		length = _strlen(revString);

		for (i = length - 1; i >= 0; i--)
		{
			buffer_insert(revString[i], buffer_index, buffer);
			count++;
		}
	}

	return (count);
}


/**
 * _strlen - a function to check length of string
 * @str: string to check
 * Return: length of string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != 0)
	{
		length++;
	}

	return (length);
}
