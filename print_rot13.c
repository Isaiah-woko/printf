#include "main.h"

/**
* __strlen - return the length of the given string
* @s: string to check
* Return: the length of the given string
*/
int __strlen(const char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
* rot13 - shift char by 13 positions
* @str: string to shift
* Return: pointer of the str
*/
char *rot13(const char *str)
{
	char alph0[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char alph13rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char *ptr;

	int i = 0, j = 0, checker = 0;

	ptr = malloc(__strlen(str) + 1);
	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j])
	{
		i = 0;
		checker = 1;
		while (alph0[i])
		{
			if (str[j] == alph0[i])
			{
				ptr[j] = alph13rot[i];
				checker = 0;
				break;
			}
			i++;
		}
		if (checker)
			ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0'; /* Null-terminate the string */
	return (ptr);
}

/**
* print_rot13 - print a string roted 13 times %R
* @args: the argument passed
* @buffer_index: the buffer index
* @buffer: the buffer
* Return: number of character in string printed
*/
int print_rot13(va_list args, int *buffer_index, char buffer[])
{
	int count = 0;

	char *str, *nptr;

	int i = 0;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		const char *null = "(NULL)";

		for (i = 0; null[i] != '\0'; i++)
		{
			buffer_insert(null[i], buffer_index, buffer);
			count++;
		}
	}
	else
	{
		nptr = rot13(str);
		for (i = 0; nptr[i] != '\0'; i++)
		{
			buffer_insert(nptr[i], buffer_index, buffer);
			count++;
		}
		free(nptr);
	}
	return (count);
}
