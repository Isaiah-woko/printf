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
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	printf("complete the senence :you %s nothing, Jon Snow.\n", "Know");
	_printf("complete the senence :you %s nothing, Jon Snow.\n", "Know");
	return (0);
}
