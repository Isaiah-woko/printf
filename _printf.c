#include "main.h"
/**
* _printf - print string with different specifier passed
* @format: the format list
* Return: Number of character printed to the STDOUT
*/
int _printf(const char *format, ...)
{
	int i;
	va_list args;
	int numberofchar = 0;

	/*checks if format is NULL*/
	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);
	
	/* check if format not null and we don't reach the end of the string*/
    /* format && format[i]*/
	for (i = 0; format && format[i] != '\0'; i++)
	{

		if (format[i] != '%')
		{
			_putchar(format[i]);
			numberofchar++;
		}
		else if (format[i] == '%')
		{
			i++;

			if (format[i] == ' ' || '\0')
			{
				return (-1);
			}
			else if (format[i] == '%')
			{
				numberofchar += handle_percent();
			}
			else
			{
				numberofchar += specifier_handler(format[i], format, &i, args);
			}
		}
	}
	va_end(args);
	return (numberofchar);
}

