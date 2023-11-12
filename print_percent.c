#include "main.h"

/**
 * handle_percent - ab functio to handle % specifier
 * @buffer_index: the buffer index
 * @buffer: the buffer
 * Return: 1
 */

int handle_percent(int *buffer_index, char buffer[])
{
	/*_putchar('%');*/
	buffer_insert('%', buffer_index, buffer);
	return (1); /* 1 for the count of %*/
}
