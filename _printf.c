#include "main.h"
/**
* _printf - print string with different specifier passed
* @format: the format list
* Return: Number of character printed to the STDOUT
*/
int _printf(const char *format, ...)
{
	int result;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}


	va_start(args, format);

	result = format_string(format, args);

	va_end(args);
	return (result);

}


/**
 * format_string - a function for processing the string
 * @format: the format list
 * @args: the ariable number of arguments
 * Return: number of characters
 */

int format_string(const char *format, va_list args)
{
	int i, numberofchar = 0, buffer_index = 0;
	char buffer[BUFFER_SIZE];


	for (i = 0; format && format[i] != '\0'; i++)
	{

		if (format[i] != '%')
		{
			/*_putchar(format[i]);*/
			buffer_insert(format[i], &buffer_index, buffer);

			numberofchar++;
		}
		else if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			else if (format[i] == '%')
			{
				numberofchar += handle_percent(&buffer_index, buffer);
			}
			else
			{
				numberofchar += specifier_handler(format[i], args, buffer, &buffer_index);
			}
		}
	}
	buffer_print(&buffer_index, buffer);

	return (numberofchar);
}
