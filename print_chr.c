#include "main.h"
/**
 * print_chr - print a character the specifier %c
 * @args: the argument passed
 * @buffer_index: the buffer index
 * @buffer: the buffer
 * Return: number of character printed
 */
int print_chr(va_list args, int *buffer_index, char buffer[])
{
	int character = va_arg(args, int);

	buffer_insert(character, buffer_index, buffer);
	return (1);
}
