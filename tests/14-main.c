#include "../main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0;
 */

int main(void)
{
	 _printf("String:[%R]\n", "I am a string !");
     _printf("String:[%R]\n", NULL);
	 _printf("String:[%R]\n", (char *)0);


	 return (0);
}
