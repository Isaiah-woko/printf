#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
* main - Testing Task 0 : 'p'
*
* Return: Always 0
*/
int main(void)
{
	int num = 10, len, len1;
	int *ptr0 = &num;
	int *arr;
	char arr2[5] = "hello";

	arr = malloc(sizeof(int) * 8);
	len = _printf("%p\n", &num);
	len1 = printf("%p\n", &num);
	printf("1-printed char : %d\n", len);
	_printf("1 -printed char : %d\n", len1);
	printf("2- %s,%p\n", arr2, arr2);
	_printf("2 - %s,%p\n", arr2, arr2);
	_printf("3 - %p\n", ptr0);
	printf("3- %p\n", ptr0);
	_printf("4 -%p\n", &ptr0);
	printf("4-%p\n", &ptr0);
	_printf("5 -%p\n", arr);
	printf("5-%p\n", arr);
	_printf("6 -%p\n", &arr);
	printf("6-%p\n", &arr);
	len = printf("7-%p\n", NULL);
	len1 = _printf("7-%p\n", NULL);
	printf("1-printed char : %d\n", len);
	_printf("1 -printed char : %d\n", len1);
	printf("8-%p\n", 1);
	_printf("8-%p\n", 2);
	printf("9-%p\n", '\0');
	_printf("9-%p\n", '\0');

	return (0);
}
