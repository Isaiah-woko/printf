#include "../main.h"
#include <limits.h>
/**
 * main - Testing Task 2 : 'b' => binary
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    printf("%b\n", 98);
    _printf("%b\n", 0);
    printf("%b\n", 0);
    _printf("%b\n", 1);
    printf("%b\n", 1);
    _printf("%b\n", -1);
    printf("%b\n", -1);
    _printf("%b\n", INT_MAX);
    printf("%b\n", INT_MAX);
    _printf("%b\n", INT_MIN);
    printf("%b\n", INT_MIN);
    _printf("%b\n", -42);
    printf("%b\n", -42);
    _printf("%b\n", 10000);
	printf("%b\n", 10000);
    _printf("%b\n", INT_MAX + 1024);
	printf("%b\n", INT_MAX + 1024);
	_printf("%b\n", INT_MIN - 1024);
	printf("%b\n", INT_MIN - 1024);
    _printf("%b\n", INT_MAX + 1024);
	printf("%b\n", INT_MAX + 1024);
	_printf("%biiiiii%bdddddd\n", 1024);
	printf("%biiiiii%bdddddd\n", 1024);
    _printf("%b\n", (INT_MIN + INT_MAX));
    printf("%b\n", (INT_MIN + INT_MAX));

    
    return (0);
}