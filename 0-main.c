#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* Description: test 'd' , 'i' ,'c'
* Return: Always 0
*/
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("octal:[%d]\n", 052);
	printf("octal:[%d]\n", 052);
	_printf("hex:[%d]\n", 0xA2);
	printf("hex:[%d]\n", 0xA2);

	return (0);
}
