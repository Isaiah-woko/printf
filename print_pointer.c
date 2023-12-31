#include "main.h"
#include <stdint.h>

/**
* print_pointer - Function that print %p specifier
* @args: the argument
* @buffer_index: the buffer index
* @buffer: the buffer
* Return: 1
*/
int print_pointer(va_list args, int *buffer_index, char buffer[])
{
	int count = 0, i, hexdigit;
	int checkstartofzero = 0;
	void *p;

	uintptr_t ptr_as_int;

	p = va_arg(args, void *);
	if (p == NULL)
	{
		const char *null = "(nil)";

		for (i = 0; null[i] != '\0'; i++)
		{
			buffer_insert(null[i], buffer_index, buffer);
			count++;
		}
	}
	else
	{
		buffer_insert('0', buffer_index, buffer);
		buffer_insert('x', buffer_index, buffer);
		count += 2;

		ptr_as_int = (uintptr_t)p;

		for (i = sizeof(void *) * 2 - 1; i >= 0; i--)
		{
			hexdigit = (ptr_as_int >> (i * 4)) & 0xF;
			if (checkstartofzero || hexdigit)
			{
				if (hexdigit < 10)
					buffer_insert(hexdigit + '0', buffer_index, buffer);
				/* digit = 11 , hex = b , ascii(a) + 1 (digit - 10) */
				else
					buffer_insert('a' + hexdigit - 10, buffer_index, buffer);
				count++, checkstartofzero = 1;
			}
		}
	}
	return (count);
}
