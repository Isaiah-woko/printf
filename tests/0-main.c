#include "../main.h"

/**
 * main - Testing Task 0 : 'c' , 's' , '%'
 *
 * Return: Always 0
 */
int main(void)
{
	int len0, len1;
    printf("%%\n");
	_printf("%%\n");
	printf("%\0\n");
	_printf("%\0\n");
	printf("% \n");
	_printf("% \n");
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	len0=printf("print- complete the senence :you %s %Snothing, Jon Snow.\n", "Know", "know\t");
	len1=_printf("_print - complete the senence :you %s %Snothing, Jon Snow.\n", "Know", "know\t");
	printf("%d\n", len0);
	_printf("%d\n", len1);

	return (0);
}
