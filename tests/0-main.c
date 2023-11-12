#include "../main.h"

/**
 * main - Testing Task 0 : 'c' , 's' , '%'
 *
 * Return: Always 0
 */
int main(void)
{
    printf("%%\n");
	_printf("%%\n");
	printf("%\0\n");
	_printf("%\0\n");
	printf("% \n");
	_printf("% \n");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

    return (0);
}
