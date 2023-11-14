#include "main.h"

/**
* print_rot13 - print a string roted 13 times %R
* @args: the argument passed
* @buffer_index: the buffer index
* @buffer: the buffer
* Return: number of character in string printed
*/
int print_rot13(va_list args, int *buffer_index, char buffer[])
{
	int count = 0, i = 0, j = 0, checker = 0;
	char alph0[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alph13rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		const char *null = "(ahyy)";

		for (i = 0; null[i] != '\0'; i++)
		{
			buffer_insert(null[i], buffer_index, buffer);
			count++;
		}
	}
	else
	{
		j = 0;
		while (str[j])
		{
			i = 0;
			checker = 1;
			while (alph0[i])
			{
				if (str[j] == alph0[i])
				{
					buffer_insert(alph13rot[i], buffer_index, buffer);
					checker = 0;
					break;
				}
				i++;
			}
			if (checker)
				buffer_insert(str[j], buffer_index, buffer);
			j++;
		}
	}
	return (count);
}
