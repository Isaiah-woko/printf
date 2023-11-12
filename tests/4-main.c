#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Testing Task 0 : 'c' , 's' , '%'
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;
    printf("%%\n");
	_printf("%%\n");
	printf("%\0\n");
	_printf("%\0\n");
	printf("% \n");
	_printf("% \n");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
     _printf("%b\n", 98);
    printf("%b\n", 98);
    _printf("%b\n", 0);
    printf("%b\n", 0);
    _printf("%b\n", 1);
    printf("%b\n", 1);
    len = _printf("Let's try to printf a simple sentence.%d\n", -762534);
	len2 = printf("Let's try to printf a simple sentence.%d\n", -762534);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
    _printf("somestring\n");
    printf("somestring\n");
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
