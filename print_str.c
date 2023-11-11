#include "main.h"

/**
 * print_str - print a string for the specifier %s
 * @args: the argument passed
 * Return: number of character in string printed
 */

int print_str(va_list args)
{
	char *string  = va_arg(args, char*);
	int count =  0;
	int i;

	if (string == NULL)
	{
		const char *null = "(null)";

		for (i = 0; null[i] != '\0'; i++)
		{
			_putchar(null[i]);
			count++;
		}
	}
	else
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
			count++;
		}
	}

	return (count);
}
