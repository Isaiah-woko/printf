#include "main.h"

/**
 * print_str - print a string for the specifier %s
 * @args: the argument passed
 * @buffer_index: the buffer index
 * @buffer: the buffer
 * Return: number of character in string printed
 */

int print_str(va_list args, int *buffer_index, char buffer[])
{
	char *string  = va_arg(args, char*);
	int count =  0;
	int i;

	if (string == NULL)
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
		for (i = 0; string[i] != '\0'; i++)
		{
			buffer_insert(string[i], buffer_index, buffer);
			count++;
		}
	}

	return (count);
}
