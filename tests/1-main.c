#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
* main - Entry point
* Description: test 'd' , 'i' 
* Return: Always 0
*/
int main(void)
{
	int len;
	int len2;
	len = _printf("Let's try to printf a simple sentence.%d\n", -762534);
	len2 = printf("Let's try to printf a simple sentence.%d\n", -762534);
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
	/***/
	_printf("%d\n", 0);
	printf("%d\n", 0);
	_printf("%i\n", 0);
	printf("%i\n", 0);
	/***/
	_printf("There is %d bytes in %dKB\n",1024, 1);
	printf("There is %d bytes in %dKB\n",1024, 1);
	_printf("There is %i bytes in %iKB\n",1024, 1);
	printf("There is %i bytes in %iKB\n",1024, 1);
	/***/
	_printf("%i - %i = %i\n",1024, 2048, (2048 - 1024));
	printf("%i - %i = %i\n",1024, 2048, (2048 - 1024));
	_printf("%d - %d = %d\n",1024, 2048, (2048 - 1024));
	printf("%d - %d = %d\n",1024, 2048, (2048 - 1024));
	/***/
	_printf("%i\n", -98);
	printf("%i\n", -98);
	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);
	_printf("%i\n", INT_MAX);
	printf("%i\n", INT_MAX);
	/*  */
	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);
	/* */
	_printf("%i\n", 10000);
	printf("%i\n", 10000);
	_printf("%d\n", 10000);
	printf("%d\n", 10000);
	/* */
	_printf("%i\n", INT_MAX + 1024);
	printf("%i\n", INT_MAX + 1024);
	_printf("%i\n", INT_MIN - 1024);
	printf("%i\n", INT_MIN - 1024);
	_printf("%d\n", INT_MIN + 1024);
	printf("%d\n", INT_MIN + 1024);
	_printf("%d\n", INT_MAX - 1024);
	printf("%d\n", INT_MAX - 1024);
	/* */
	_printf("%iddi%diddiiddi\n",1024);
	printf("%iddi%diddiiddi\n", 1024);
	/* */
	_printf("%i + %i = %i\n",INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%i + %i = %i\n",INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	/***/
	_printf("%d == %i\n", 1024, 1024);
	printf("%d == %i\n", 1024, 1024);

	return (0);
}
