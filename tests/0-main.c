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
	/*int test_values[] = {0, 1, -1, 42, 127, -128, 256, INT_MAX, INT_MIN};*/
	int len2;
	/*long unsigned int i;*/

	len = _printf("Let's try to printf a simple sentence.%d\n", -762534);
	len2 = printf("Let's try to printf a simple sentence.%d\n", -762534);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Positive:[%i]\n", 98);
	printf("Positive:[%i]\n", 98);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("octal:[%d]\n", 052);
	printf("octal:[%d]\n", 052);
	_printf("hex:[%d]\n", 0xA2);
	printf("hex:[%d]\n", 0xA2);
	_printf("int :[%d]\n", 0);
	printf("int :[%d]\n", 0);
	_printf("int :[%d]\n", INT_MIN - 1024);
	printf("int :[%d]\n", INT_MIN - 1024);
	_printf("There is %d bytes in %dKB\n",1024, 1);
	printf("There is %d bytes in %dKB\n",1024, 1);
	_printf("%i\n", INT_MIN);
	printf("%i\n", INT_MIN);
	_printf("%i\n", INT_MAX + 1024);
	printf("%i\n", INT_MAX + 1024);
	_printf("%iddi%diddiiddi\n",1024);
	printf("%iddi%diddiiddi\n", 1024);
	

	 _printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !"); 
	return (0);
}
