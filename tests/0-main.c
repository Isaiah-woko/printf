#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
* main - Entry point
* Description: test 'd' , 'i' ,'c', 'c'
* Return: Always 0
*/
int main(void)
{
	int len;
	int test_values[] = {0, 1, -1, 42, 127, -128, 256, INT_MAX, INT_MIN};
	int len2;
	long unsigned int i;

	len = _printf("Let's try to printf a simple sentence.%d\n", -76253429183091284);
	len2 = printf("Let's try to printf a simple sentence.%d\n", -76253429183091284);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Negative:[%i]\n", -76253429183091284);
	printf("Negative:[%i]\n", -76253429183091284);
	_printf("Negative:[%i]\n", 76253429183091284);
	printf("Negative:[%i]\n", 76253429183091284);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("octal:[%d]\n", 052);
	printf("octal:[%d]\n", 052);
	_printf("hex:[%d]\n", 0xA2);
	printf("hex:[%d]\n", 0xA2);
	 _printf("String:[%s]\n", "I am a string !");
	 printf("String:[%s]\n", "I am a string !");

	_printf("Binary:[%b]\n", 100121);
	printf("Binary:[%b]\n", 100121);
	
	/**
	* for (i = 0; i < sizeof(test_values) / sizeof(test_values[0]); i++)
	* {
	*	int value = test_values[i];
	*
	*	printf("%i - Decimal: %d\n", i, value); , Binary: %b\n", value, value);
	*	_printf("%i - Decimal: %d\n", i, value); , Binary: %b\n", value, value);
	*	printf("Decimal: %d\n");, Binary: %b\n", value, value);
	*
	* }
	*/
	/* '+' flag handling */
    /*_printf("flag '+':[%+d]\n", 98);*/
	printf("flag '+':[%++++d]\n", 98);
    /*//_printf("flag '+':[%+d]\n", 98);*/
	printf("flag '+':[%++++d]\n", -98);
    
    
	return (0);
}
