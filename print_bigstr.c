#include "main.h"
/**
* print_bigstr - print a character the specifier %c
* @args: the argument passed
* @buffer_index: the buffer index
* @buffer: the buffer
* Return: number of character printed
*/
int print_bigstr(va_list args, int *buffer_index, char buffer[])
{
	int count = 0, i, value, firstDigit, secondDigit;
	const char *null;
	char *str, firstDigitChar, secondDigitChar;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		null = "(null)";
		for (i = 0; null[i] != '\0'; i++)
		{
			buffer_insert(null[i], buffer_index, buffer);
			count++;
		}
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if ((str[i] < 32) || str[i] >= 127)
			{
				buffer_insert('\\', buffer_index, buffer);
				buffer_insert('x', buffer_index, buffer);
				value = (unsigned char)str[i];

				firstDigit = (value >> 4) & 0xF;
				firstDigitChar = (firstDigit < 10) ? ('0' + firstDigit) :
							('A' + firstDigit - 10);
				buffer_insert(firstDigitChar, buffer_index, buffer);
				secondDigit = value & 0xF;
				secondDigitChar = (secondDigit < 10) ? ('0' + secondDigit) :
							('A' + secondDigit - 10);
				buffer_insert(secondDigitChar, buffer_index, buffer);
				count += 3;
			}
			else
			{
			    buffer_insert(str[i], buffer_index, buffer);
			} count++;
		}
	} return (count);
}
