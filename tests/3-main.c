#include "../main.h"
#include <limits.h>

/**
 * main - entry point
 * Desciption: main file to handle 'u' 'o' 'x' 'X'
 *
 * Return: 0
 */

int main(void)
{
	unsigned int ui;

	ui = 0;
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);

	ui = 12345;
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);

	ui = 4294967295; /* Maximum value for an unsigned int*/
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);

	ui = (unsigned int)INT_MAX + 1024;
	 _printf("Unsigned:[%u]\n", ui);
	 printf("Unsigned:[%u]\n", ui);

	 return (0);
}
