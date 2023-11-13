#include "main.h"

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
	void *p;

	p = va_arg(args, void *);
	buffer_insert('0', buffer_index, buffer);
	buffer_insert('x', buffer_index, buffer);
	count += 2;
	for (i = sizeof(void *) * 2 - 5; i >= 0 ; i--)
	{
		hexdigit = ((unsigned long long) p >> (i * 4)) & 0xF;
		if (hexdigit < 10)
			buffer_insert(hexdigit + '0', buffer_index, buffer);
		/*digit = 11 , hex = b , ascii(a) + 1 (digit - 10)*/
		else
			buffer_insert('a' + hexdigit - 10, buffer_index, buffer);
		count++;
	}

	return (count);
}
