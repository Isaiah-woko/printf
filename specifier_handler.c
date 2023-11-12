#include "main.h"
/**
* specifier_handler - the switch case to chose the right specifier
* @specifier: the specifier character 'c', 'd' , ...
* @args: the argument passed
* @buffer: the buffer
* @buffer_index: the buffer index
* Return: Number of character printed
*/

int specifier_handler(char specifier, va_list args, char buffer[],
		int *buffer_index)
{
	int count = 0;

	switch (specifier)
	{
		case 'c':
			count = print_chr(args, buffer_index, buffer);
			return (count);
		case 'd':
		case 'i':
			count = print_int(args, buffer_index, buffer);
			return (count);
		case 's':
			count = print_str(args, buffer_index, buffer);
			return (count);
		case 'b':
			count = print_binary(args, buffer_index, buffer);
			return (count);
		case 'u':
			count = print_unsigned_int(args, buffer_index, buffer);
			return (count);
		case 'o':
			count = print_unsigned_octal(args, buffer_index, buffer);
			return (count);
		default:
			buffer_insert('%', buffer_index, buffer);
			buffer_insert(specifier, buffer_index, buffer);
			count += 2;
			return (count);
	}
}
