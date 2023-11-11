#include <limits.h>
#include <stdio.h>
#include "../main.h"

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
	_printf("Binary:[%b]\n", 100121);
	printf("Binary:[%b]\n", 100121);
    _printf("Binary:[%b]\n", 100121000);
	printf("Binary:[%b]\n", 100121000);
    _printf("Binary:[%b]\n", 98);
	printf("Binary:[%b]\n", 98);
    /* '+' flag handling */
    /*_printf("flag '+':[%+d]\n", 98);*/
	printf("flag '+':[%++++d]\n", 98);
    /*//_printf("flag '+':[%+d]\n", 98);*/
	printf("flag '+':[%++++d]\n", -98);
    
    
	return (0);
}
