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

	arr = malloc(sizeof(int) * 8);
	len = _printf("%p\n", &num);
	len1 = printf("%p\n", &num);
	printf("printed char : %d\n", len);
	printf("printed char : %d\n", len1);
	_printf("%p\n", ptr0);
	printf("%p\n", ptr0);
	_printf("%p\n", &ptr0);
	printf("%p\n", &ptr0);
	_printf("%p\n", arr);
	printf("%p\n", arr);
	_printf("%p\n", &arr);
	printf("%p\n", &arr);
	return (0);
}
