#include "../main.h"
#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	_printf("%S\n", "Best\nSchool");
	//printf("%S\n", "Best\nSchool");
	_printf("%S\n", "Best\"School");
	//printf("%S\n", "Best\'School");
	_printf("%S\n", "Best\tSchool");
	//printf("%S\n", "Best\tSchool");
	return (0);
}
