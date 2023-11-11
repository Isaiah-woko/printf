#include "main.h"
/**
* specifier_handler - the switch case to chose the right specifier
* @specifier: the specifier character 'c', 'd' , ...
* @format: the format array
* @i: the index of format
* @args: the argument passed
* Return: Number of character printed
*/

int specifier_handler(char specifier, const char *format, int *i, va_list args)
{
	int count = 0;

	switch (specifier)
	{
		case 'c':
			count = print_chr(args);
			return (count);
		case 'd':
		case 'i':
			count = print_int(args);
			return (count);
		default:
			_putchar('%');
			_putchar(format[*i]);
			count += 2;
			return (count);
	}
}
