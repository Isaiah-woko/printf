#include "main.h"


/**
 * initSpecifiersFunc -- A function to initialize specifier function struct
 *
 * Return: a pointer to the specifierFuncs array
 */

specifierFunc *initSpecifierFunc(void)
{
	static specifierFunc specifierFuncs[] = {
		{'c', print_chr},
		{'d', print_int},
		{'i', print_int},
		{'s', print_str},
		{'b', print_binary},
		{'u', print_unsigned_int},
		{'o', print_unsigned_octal},
		{'p', print_pointer},
		{'x', print_unsigned_hexa},
		{'X', print_unsigned_Hexa},
		{'r', print_revStr},
		{'R', print_rot13},
		{'S', print_bigstr}
	};

	return (specifierFuncs);
}

/**
 * specifiers_handler - a function to choose right specifier
 * @specifier: the specifier character
 * @args: the argument passed
 * @buffer: the buffer
 * @buffer_index: the buffer index
 * Return: number of characters printed
 */

int specifier_handler(char specifier, va_list args, char buffer[],
		int *buffer_index)
{
	int count = 0, i;
	int specifiersNum;
	specifierFunc *specifiers = initSpecifierFunc();

	specifiersNum = NUM_SPECIFIERS;


	for (i = 0; i < specifiersNum; i++)
	{
		if (specifiers[i].specifier == specifier)
		{
			count = specifiers[i].printFunc(args, buffer_index, buffer);
			return (count);
		}
	}

	buffer_insert('%', buffer_index, buffer);
	buffer_insert(specifier, buffer_index, buffer);
	count += 2;
	return (count);
}
