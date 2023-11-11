#include "main.h"
/**
 * print_chr - print a character the specifier %c
 * @args: the argument passed
 * Return: number of character printed
 */
int print_chr(va_list args)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (1);
}
